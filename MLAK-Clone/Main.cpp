#define OLC_PGE_APPLICATION
#include "Engine.h"
#include <iostream>

int main()
{
    Engine engine;
    engine.Construct(800, 600, 1, 1);
    engine.Start();
}
