#include "Engine.h"

Engine::Engine()
{
	sAppName = "The Life of a King";
	running = true;
}
Engine::~Engine()
{
	OnUserDestroy();
}

bool Engine::OnUserCreate()
{
	olc::Sprite* Gui = new olc::Sprite("borderdecoration.png");
	game.addGui(Gui);
	return true;
}

bool Engine::OnUserUpdate(float fElapsedTime)
{
	if (running)
	{
		Clear(olc::GREEN);
		DrawState(game.getState(), fElapsedTime);
		InputHandler(game.getState());
		return true;
	}
	else
	{
		return false;
	}
}

void Engine::DrawState(int i, float fElapsedTime)
{
	switch (i)
	{
		case Intro:
		{
			Startup();
			break;
		}
		case Town:
		{
			DrawHUD();
			Time(fElapsedTime);
			break;
		}
		case Dungeon:
		{
			Time(fElapsedTime);
			break;
		}
		case Pause:
		{
			break;
		}
		case Credits:
		{
			break;
		}

	}
}



void Engine::DrawHUD()
{
	DrawPartialDecal(olc::vf2d(0, ScreenHeight() - 108), game.gui, HUDLEFT, HUDTILE, olc::vf2d(2.f, 3.f), olc::BLUE);
	DrawPartialDecal(olc::vf2d(72, ScreenHeight() - 108), game.gui, HUDCENTER, HUDTILE, olc::vf2d(2.f, 3.f), olc::BLUE);
	DrawPartialDecal(olc::vf2d(144, ScreenHeight() - 108), game.gui, HUDRIGHT, HUDTILE, olc::vf2d(2.f, 3.f), olc::BLUE);
}

void Engine::InputHandler(int i)
{
	switch (i)
	{
		case Intro:
		{
			if (GetKey(olc::ENTER).bPressed)
			{
				game.setState(1); 
			}
			else if (GetKey(olc::ESCAPE).bPressed)
			{
				running = false;
			}
			break;
		}
		case Town:
		{
			if (GetKey(olc::ESCAPE).bPressed)
			{
				game.setState(3);
			}
			break;
		}
		case Dungeon:
		{
			break;
		}
		case Pause:
		{
			break;
		}
		case Credits:
		{
			break;
		}
	}
}


void Engine::Startup()
{
	DrawStringDecal(olc::vf2d(ScreenWidth() / 3, ScreenHeight() / 2), "Royal Architect", olc::WHITE, olc::vf2d(5.f, 5.f));
	FillRect(olc::vi2d(ScreenWidth() / 3, 500), olc::vi2d(100, 200), olc::VERY_DARK_GREY);
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
