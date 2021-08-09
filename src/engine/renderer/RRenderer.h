//
// Created by jpdante on 08/08/2021.
//

#pragma once

class RRenderer {
protected:
    RRenderer();
    ~RRenderer();
    void Init();
    void End();

public:
    static RRenderer* GetInstance();

    static void Destroy();

};
