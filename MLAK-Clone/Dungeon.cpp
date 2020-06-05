#include "Dungeon.h"

Dungeon::Dungeon(int Diff)
{
	this->Difficulty = Diff;
	setNumEnemies();
}

Dungeon::~Dungeon()
{
}

void Dungeon::setNumEnemies()
{
	switch (Difficulty)
	{
		case VeryEasy:
		{
			numEnemies = 2;
			setMateriaAm(20);
			break;
		}
		case Easy:
		{
			numEnemies = 3;
			setMateriaAm(40);
			break;
		}
		case Intermediate:
		{
			numEnemies = 5;
			setMateriaAm(60);
			hasBoss = true;
			break;
		}
		case Hard:
		{
			numEnemies = 5;
			setMateriaAm(100);
			hasLegendary = true;
			hasBoss = true;
			break;
		}
		case VeryHard:
		{
			numEnemies = 6;
			setMateriaAm(150);
			hasLegendary = true;
			hasBoss = true;
			break;
		}
		case Brutal:
		{
			numEnemies = 10;
			setMateriaAm(300);
			hasLegendary = true;
			hasBoss = true;
			break;
		}

	}
}
