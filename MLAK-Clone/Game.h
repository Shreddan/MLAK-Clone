#pragma once
#include "Rend.h"
#include "Player.h"
#include "Map.h"
#include "Dungeon.h"
#include "Adventurer.h"
#include "Building.h"

struct GUI : public olc::Decal
{
	GUI(olc::Sprite* spritesrc) : Decal(spritesrc) { this->sprite = spritesrc; }
	~GUI() { delete sprite; }

};

struct Build : public olc::Decal
{
	Build(olc::Sprite* spritesrc) : Decal(spritesrc) { this->sprite = spritesrc; }
	~Build() { delete sprite; }

	std::vector<Building> BuildTypes;
};

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
	void initDungs();
	void initBuilds();
	
	GUI *gui;
	std::vector<Dungeon> dungeons;
	std::vector<Building> buildings;


private:
	int Hour;
	int Day;
	int timeAllowed;
	int gState;
	std::vector<Adventurer> adventurers;

	
};



