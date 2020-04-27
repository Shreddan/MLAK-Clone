#define OLC_PGE_APPLICATION
#include "Engine.h"
#include <iostream>

int main()
{
    const int width = 1400;
    const int height = width * 9 / 16;
    Engine engine;
    engine.Construct(width, height, 1, 1);
    engine.Start();
}
