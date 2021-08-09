//
// Created by jpdante on 08/08/2021.
//
#include <iostream>
#include <map>
#include <set>
#include <limits>
#include <pspgu.h>
#include <pspkernel.h>
#include <pspdisplay.h>
#include <pspdebug.h>
#include <pspctrl.h>
#include <ctime>
#include <cstring>
#include <pspaudiolib.h>
#include <psprtc.h>

#include "RGame.h"

#include "RealShot.h"

RealShot::RealShot() {
    rGame = nullptr;
    rRunning = false;
    rPaused = false;
    rDeltaTime = 0.0;

    Init();
}

RealShot::~RealShot() {

}

void RealShot::Init() {
    rRunning = true;
    rPaused = false;
}

void RealShot::End() {
    rRunning = false;
}

void RealShot::Run() {
    u64 currentTime;
    u64 lastTime;
    u32 gTickFrequency = sceRtcGetTickResolution();

    int count = 0;
    u64 last1Sec;

    sceRtcGetCurrentTick(&lastTime);
    while (rRunning) {
        if (rPaused) {
            sceKernelDelayThread(1);
        } else {
            sceRtcGetCurrentTick(&currentTime);
            float dt = (currentTime - lastTime) / (float) gTickFrequency;
            rDeltaTime = dt;

            Update(dt);
            Render();

            if ((currentTime - last1Sec) > 1000000) {
                pspDebugScreenPrintf("%i FPS - %f\n", count, dt);
                last1Sec = currentTime;
                count = 0;
            }
            //sceKernelDelayThread(16666);		sceGuSync(0,0);

            sceDisplayWaitVblankStart();
            count++;
        }
        lastTime = currentTime;
    }
}

void RealShot::Pause() {
    if (rPaused) return;
    rPaused = true;
    if (rGame != nullptr) rGame->Pause();
}

void RealShot::Resume() {
    if (rPaused) {
        rPaused = false;
        if (rGame != nullptr) rGame->Resume();
    }
}

void RealShot::Update(float frameTime) {

}

void RealShot::Render() {

}

float RealShot::GetDelta() {
    return rDeltaTime;
}

void RealShot::SetDelta(float delta) {
    rDeltaTime = delta;
}

int RealShot::GetTime() {
    u64 curr;
    sceRtcGetCurrentTick(&curr);
    return (int) ((curr * 1000) / sceRtcGetTickResolution());
}

float RealShot::GetFPS() {
    return rDeltaTime > 0 ? 1.0f / rDeltaTime : 0;;
}

void RealShot::SetGame(RGame *game) {
    rGame = game;
}

RealShot *RealShot::rInstance = nullptr;

RealShot *RealShot::GetInstance() {
    if (rInstance == nullptr) rInstance = new RealShot();
    return rInstance;
}

void RealShot::Destroy() {
    if (rInstance) {
        delete rInstance;
        rInstance = nullptr;
    }
}
