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
	DrawStringDecal(olc::vf2d(250, 200), "Day : " + std::to_string(game.getDay()), olc::RED, olc::vf2d(2.f, 2.f));
	DrawStringDecal(olc::vf2d(250, 300), "Hour : " + std::to_string(game.getHour()), olc::RED, olc::vf2d(2.f, 2.f));
	timeTick += fElapsedTime;

	switch (game.getTA())
	{
		case 1:
		{
			time = 25.f;
			break;
		}
		case 2:
		{
			time = 35.f;
		}
		case 3:
		{
			time - 50.f;
		}
	}
	

	if (timeTick >= time)
	{
		game.incremHour();

		if (game.getHour() > 20)
		{
			game.incrementDay();
			game.setHour(8);
		}

		timeTick = 0;
	}
}
