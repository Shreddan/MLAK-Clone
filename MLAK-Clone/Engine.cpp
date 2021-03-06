#include "Engine.h"

Engine::Engine()
{
	sAppName = "Royal Architect";
	running = true;
}
Engine::~Engine()
{
	OnUserDestroy();
}

bool Engine::OnUserCreate()
{
	Gui = new olc::Sprite("borderdecoration.png");
	game.addGui(Gui);
	DungNode = new olc::Sprite("bubble.png");
	Node = new olc::Decal(DungNode);
	back1 = new olc::Sprite("background1.png");
	dBack1 = new olc::Decal(back1);
	CreateLayer();
	CreateLayer();
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
			if (!game.isPaused)
			{
				DrawHUD();
				Time(fElapsedTime);
			}
			break;
		}
		case DungeonMap:
		{
			EnableLayer(2, true);
			DrawBackground(*dBack1);
			if (!game.isPaused)
			{
				EnableLayer(1, true);
				DrawHUD();
				DrawNodes();
				Time(fElapsedTime);
			}
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

void Engine::DrawBackground(olc::Decal &dec)
{
	DrawDecal(olc::vf2d(0, 0), &dec, olc::vf2d(1.f, 1.f));
}

void Engine::DrawNodes()
{
	if (game.dungeons.size() > 0)
	{
		//std::cout << game.dungeons.size() << std::endl;
		
		for (int i = 0; i < game.dungeons.size(); i++)
		{
			if (game.dungeons[i].checkActive())
			{
				if (!game.dungeons[i].checkCompleted())
				{
					DrawDecal(olc::vf2d(game.dungeons[i].getXCoord(), game.dungeons[i].getYCoord()), Node, nodeScale);
				}
				else if (game.dungeons[i].checkCompleted())
				{
					DrawDecal(olc::vf2d(game.dungeons[i].getXCoord(), game.dungeons[i].getYCoord()), Node, nodeScale, olc::DARK_GREEN);
				}
			}
			else
			{
				DrawDecal(olc::vf2d(game.dungeons[i].getXCoord(), game.dungeons[i].getYCoord()), Node, nodeScale, olc::DARK_RED);
			}
		}
	}
	else
	{
		std::cout << "Dungeon list Empty" << std::endl;
	}
}

void Engine::DrawPause()
{
}

void Engine::InputHandler(int i)
{
	switch (i)
	{
		case Intro:
		{
			if (GetKey(olc::ENTER).bPressed)
			{
				game.setState(Town); 
			}
			else if (GetKey(olc::ESCAPE).bPressed)
			{
				running = false;
			}
			break;
		}
		case Town:
		{
			if (GetKey(olc::ESCAPE).bPressed && !game.isPaused)
			{
				game.isPaused = true;
			}
			else if (GetKey(olc::ESCAPE).bPressed && game.isPaused)
			{
				game.isPaused = false;
			}
			else if (GetKey(olc::K2).bPressed)
			{
				game.setState(DungeonMap);
			}
			break;
		}
		case DungeonMap:
		{
			if (GetKey(olc::ESCAPE).bPressed && !game.isPaused)
			{
				game.isPaused = true;
			}
			else if (GetKey(olc::ESCAPE).bPressed && game.isPaused)
			{
				game.isPaused = false;
			}
			if (GetKey(olc::K1).bPressed)
			{
				game.setState(Town);
			}
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
	DrawStringDecal(olc::vf2d(ScreenWidth() / 3, ScreenHeight() / 2), sAppName, olc::WHITE, olc::vf2d(5.f, 5.f));
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
