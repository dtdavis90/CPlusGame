#include "Poo.h"




void Poo::Update()
{
    x += vx;
    y += vy;

    if (x <= 0)
    {
        x =  0;
        vx = -vx;
    }
    else if (x + width >= gfx.ScreenWidth)
    {
         x = gfx.ScreenWidth - width;
         vx = -vx;
    }
    if (y < 0)
    {
         y = 1;
         vy = -vy;
    }
    else if (y + height >= gfx.ScreenHeight)
    {
        y = gfx.ScreenHeight - height;
        vy = -vy;
    }
}


