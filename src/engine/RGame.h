//
// Created by jpdante on 08/08/2021.
//

#pragma once

class RealShot;

class RGame{
public:
    RGame();
    virtual ~RGame();

    virtual void Init() = 0;

    virtual void Destroy() = 0;

    virtual void Update() = 0;

    virtual void Render() = 0;

    virtual void Pause() = 0;

    virtual void Resume() = 0;
};


