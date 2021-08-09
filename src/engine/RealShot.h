//
// Created by jpdante on 08/08/2021.
//
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <queue>
#include <map>
#include <vector>
#include <string>

#include <pspgu.h>
#include <pspkernel.h>
#include <pspdisplay.h>
#include <pspdebug.h>
#include <pspctrl.h>
#include <time.h>
#include <string.h>
#include <pspaudiolib.h>
#include <psprtc.h>

class RGame;

class RealShot {

private:
    RGame *rGame;
    bool rRunning;
    bool rPaused;
    float rDeltaTime;

    static RealShot *rInstance;

public:
    static RealShot *GetInstance();

    static void Destroy();

    void Init();

    void End();

    void Run();

    void Pause();

    void Resume();

    void Update(float);

    void Render();

    int GetTime();

    void SetDelta(float delta);

    float GetDelta();

    float GetFPS();

    bool IsRunning() const { return rRunning; }

    bool IsPaused() const { return rPaused; }

    void SetGame(RGame *game);

protected:
    RealShot();

    ~RealShot();

};