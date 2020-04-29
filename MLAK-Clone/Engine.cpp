#include "Engine.h"

Engine::Engine()
{
	sAppName = "The Life of a King";
}
Engine::~Engine()
{
	OnUserDestroy();
}

bool Engine::OnUserCreate()
{
	game.renderables.emplace_back("borderdecoration.png");
	return true;
}

bool Engine::OnUserUpdate(float fElapsedTime)
{
	Clear(olc::GREEN);
	DrawHUD();
	Time(fElapsedTime);
	return true;
}

void Engine::DrawHUD()
{
	DrawPartialDecal(olc::vf2d(0, ScreenHeight() - 108), game.renderables[0].decal, HUDLEFT, HUDTILE, olc::vf2d(2.f, 3.f), olc::BLUE);
	DrawPartialDecal(olc::vf2d(72, ScreenHeight() - 108), game.renderables[0].decal, HUDCENTER, HUDTILE, olc::vf2d(2.f, 3.f), olc::BLUE);
	DrawPartialDecal(olc::vf2d(144, ScreenHeight() - 108), game.renderables[0].decal, HUDRIGHT, HUDTILE, olc::vf2d(2.f, 3.f), olc::BLUE);
}

void Engine::Time(float fElapsedTime)
{
	DrawStringDecal(olc::vf2d(40, 720), "Day : " + std::to_string(game.getDay()), olc::RED, olc::vf2d(2.f, 2.f));
	DrawStringDecal(olc::vf2d(40, 740), "Hour : " + std::to_string(game.getHour()), olc::RED, olc::vf2d(2.f, 2.f));
	timeTick += fElapsedTime;

	switch (game.getTA())
	{
		case 1:
		{
			time = 23.f;
			break;
		}
		case 2:
		{
			time = 30.f;
		}
		case 3:
		{
			time - 42.f;
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
