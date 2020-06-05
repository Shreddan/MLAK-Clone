#pragma once

enum EqType
{
	None,
	Head,
	NeckAcc,
	Torso,
	WristAcc,
	Arms,
	Legs,
	Boots
};

class Equipment
{
public:
	Equipment();
	~Equipment();

protected:
	int LevelReq;
	int BuyCost;
	int SellCost;
	int Type;
	bool isEquipped;
	
};

