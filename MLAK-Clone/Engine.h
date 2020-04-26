#pragma once
#include <olcPGE/olcPixelGameEngine.h>
#include "Game.h"


class Engine : public olc::PixelGameEngine
{
public:
	Engine();
	~Engine();

	bool OnUserCreate();
	bool OnUserUpdate(float fElapsedTime);

	void Time(float fElapsedTime);

	float timeTick = 0;

	Game game;
};

