#pragma once

#include "Game.h"


class Engine : public olc::PixelGameEngine
{
public:
	Engine();
	~Engine();

	bool OnUserCreate();
	bool OnUserUpdate(float fElapsedTime);

	void DrawHUD();

	void Time(float fElapsedTime);

	float timeTick = 0;
	float time;

	Game game;
};

