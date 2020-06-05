#pragma once
#include "Renderable.h"

enum State
{
	Intro,
	Town,
	DungeonMap,
	Pause,
	Credits
};

class Game
{
public:
	Game();
	~Game();

	//Time Funcs
	void incrementDay() { Day++;};
	void incremHour() {Hour++;}
	void incremTA() {timeAllowed++;}
	void setHour(int h) { Hour = h; }
	void setState(int state) { gState = state; }

	int getDay() const { return Day; }
	int getHour() const { return Hour; }
	int getTA() const { return timeAllowed; }
	int getState() const { return gState; }

	void addGui(olc::Sprite *spritesrc);
	
	GUI *gui;

private:
	int Hour;
	int Day;
	int timeAllowed;
	int gState;
	std::vector<Dungeon> dungeons;
};

