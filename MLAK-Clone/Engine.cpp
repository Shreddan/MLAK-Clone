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
	ui = new olc::Sprite("RPGui_free.png");
	UI = new olc::Decal(ui);
	return true;
}

bool Engine::OnUserUpdate(float fElapsedTime)
{
	Clear(olc::BLACK);
	DrawHUD();
	Time(fElapsedTime);
	return true;
}

void Engine::DrawHUD()
{
	DrawPartialDecal(olc::vf2d(0, ScreenHeight() - 104), UI, olc::vf2d(0, 0), olc::vf2d(23, 26), olc::vf2d(12.f, 2.f));
	DrawPartialDecal(olc::vf2d(92, ScreenHeight() - 104), UI, olc::vf2d(26, 0), olc::vf2d(23, 26), olc::vf2d(12.f, 2.f));
	DrawPartialDecal(olc::vf2d(0, ScreenHeight() - 52), UI, olc::vf2d(0, 26), olc::vf2d(23, 21), olc::vf2d(12.f, 2.5f));
	DrawPartialDecal(olc::vf2d(92, ScreenHeight() - 52), UI, olc::vf2d(26, 26), olc::vf2d(21, 21), olc::vf2d(12.f, 2.5f));
}

void Engine::Time(float fElapsedTime)
{
	DrawStringDecal(olc::vf2d(80, 720), "Day : " + std::to_string(game.getDay()), olc::RED, olc::vf2d(2.f, 2.f));
	DrawStringDecal(olc::vf2d(80, 740), "Hour : " + std::to_string(game.getHour()), olc::RED, olc::vf2d(2.f, 2.f));
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
