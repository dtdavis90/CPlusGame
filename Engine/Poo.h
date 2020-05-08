#pragma once
#include "Graphics.h"

class Poo
{

public:

    static void DrawPoo(int x, int y);
    void Update();
    int x;
    int y;
    int vx;
    int vy;
    static constexpr int width = 24;
    static constexpr int height = 24;
    bool isEaten = false;

    Graphics gfx;
};