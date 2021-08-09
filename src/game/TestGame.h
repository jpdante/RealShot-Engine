//
// Created by jpdante on 09/08/2021.
//

#pragma once

#include "../engine/RGame.h"

class TestGame : public RGame{

public:
    TestGame();
    virtual ~TestGame();

    virtual void Init();

    virtual void Destroy();

    virtual void Update();

    virtual void Render();

    virtual void Pause();

    virtual void Resume();

};


