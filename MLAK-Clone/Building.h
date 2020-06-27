#pragma once
#include <olcPixelGameEngine.h>

enum BuildingType
{
	SmallHouse,
	MedHouse,
	BigHouse,
	ResearchCentre,
	Bakery,
	GuildHall,
	ArmourShop,
	WeaponShop,
	PotionShop
};

class Building
{
public:
	Building(int bType, bool isR);
	~Building();


	//Get - Set
	void setAvailable(bool a) { isAvailable = a; }

private:
	int x;
	int y;
	int bType;
	olc::Sprite* spr = nullptr;
	olc::Decal* dec = nullptr;
	bool isAvailable;
};

