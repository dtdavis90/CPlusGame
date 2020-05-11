#pragma once
#include "Graphics.h"

class Poo
{

public:

    void DrawPoo(int x, int y);

    void Update();
    int x = 150;
    int y = 25;
    int vx = 1;
    int vy = 1;
    static constexpr int width = 24;
    static constexpr int height = 24;
    bool isEaten = false;

};