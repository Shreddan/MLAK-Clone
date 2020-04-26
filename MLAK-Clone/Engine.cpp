#include "Engine.h"

Engine::Engine()
{
	sAppName = "#BeatTheBoredom - ";
}
Engine::~Engine()
{
	OnUserDestroy();
}

bool Engine::OnUserCreate()
{
	return true;
}

bool Engine::OnUserUpdate(float fElapsedTime)
{
	Clear(olc::BLACK);
	return true;
}

void Engine::Time(float fElapsedTime)
{
	timeTick += fElapsedTime;

	if (timeTick >= 144.f)
	{
		game.incremHour();

		if 
	}
}
