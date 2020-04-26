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
	Time(fElapsedTime);
	return true;
}

void Engine::Time(float fElapsedTime)
{
	DrawStringDecal(olc::vf2d(350, 200), game.getHour, olc::RED);
	timeTick += fElapsedTime;

	if (game.getTA() == 1)
	{
		time = 
	}

	if (timeTick >= time)
	{
		game.incremHour();

		if (game.getHour() == 20)
		{
			game.setHour(8);
		}

		timeTick = 0;
	}
}
