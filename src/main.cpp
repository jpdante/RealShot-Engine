//
// Created by jpdante on 08/08/2021.
//

#include <pspkernel.h>
#include <pspdebug.h>
#include <pspsdk.h>
#include <malloc.h>
#include <psppower.h>

#include "src/engine/RealShot.h"
#include "game/TestGame.h"

PSP_MODULE_INFO("Cube Sample", 0, 1, 1);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

RealShot *engine = nullptr;

// Exit callback
int exit_callback(int arg1, int arg2, void *common) {
    if (engine != NULL) engine->End();
    sceKernelExitGame();
    return 0;
}

// Power Callback
int power_callback(int unknown, int pwrflags, void *common) {
    if ((pwrflags & (PSP_POWER_CB_POWER_SWITCH | PSP_POWER_CB_STANDBY)) > 0) {
        // suspending
        if (engine != NULL) engine->Pause();
    } else if ((pwrflags & PSP_POWER_CB_RESUME_COMPLETE) > 0) {
        sceKernelDelayThread(1500000);
        // resume complete
        if (engine != NULL) engine->Resume();
    }
    return 0;
}

// Callback thread
int CallbackThread(SceSize args, void *argp) {
    int cbid;

    cbid = sceKernelCreateCallback("Exit Callback", exit_callback, NULL);
    sceKernelRegisterExitCallback(cbid);

    cbid = sceKernelCreateCallback("Power Callback", power_callback, NULL);
    scePowerRegisterCallback(0, cbid);

    sceKernelSleepThreadCB();

    return 0;
}

// Sets up the callback thread and returns its thread id
int SetupCallbacks(void) {
    int threadId = 0;
    threadId = sceKernelCreateThread("update_thread", CallbackThread, 0x11, 0xFA0, 0, 0);
    if (threadId >= 0) sceKernelStartThread(threadId, 0, 0);
    return threadId;
}

int main(int argc, char *argv[]) {
    pspDebugScreenInit();

    pspDebugScreenSetBackColor(0x00000000);
    pspDebugScreenSetTextColor(0xFFFFFFFF);
    pspDebugScreenClear();

    pspDebugScreenPrintf("Loading RealShot...");

    SetupCallbacks();

    // Init engine
    engine = nullptr;
    engine = RealShot::GetInstance();

    // Create game
    auto *game = new TestGame();

    // Run game
    engine->SetGame(game);
    engine->Run();

    // Destroy game
    game->Destroy();
    delete game;
    game = nullptr;

    // Destroy engine
    engine->SetGame(nullptr);
    RealShot::Destroy();

    sceKernelExitGame();
    return 0;
}