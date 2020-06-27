#pragma once

#include "Game.h"


class Engine : public olc::PixelGameEngine
{
public:
	Engine();
	~Engine();

	
	//PGE Func overrides
	bool OnUserCreate();
	bool OnUserUpdate(float fElapsedTime);

	//Drawing Funcs
	void DrawState(int i, float fElapsedTime);
	void DrawHUD();
	void DrawNodes();
	olc::Sprite* Gui = nullptr;
	olc::Sprite* DungNode = nullptr;
	olc::Decal* Node = nullptr;

	olc::vf2d nodeScale = { 0.5f, 0.5f };

	//Input Funcs & vars
	void InputHandler(int i);

	//State-specific Funcs
	void Startup();



	//Time Funcs & vars
	void Time(float fElapsedTime);
	float timeTick = 0;
	float time;

	//Objs
	Game game;

	//Bools
	bool running;

	//Stuff
	


};

