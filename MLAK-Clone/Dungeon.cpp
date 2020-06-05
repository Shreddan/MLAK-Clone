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
			break;
		}
		case Easy:
		{
			numEnemies = 3;
			break;
		}
		case Intermediate:
		{
			numEnemies = 5;
			hasBoss = true;
			break;
		}
		case Hard:
		{
			numEnemies = 5;
			hasLegendary = true;
			hasBoss = true;
			break;
		}
		case VeryHard:
		{
			numEnemies = 6;
			hasLegendary = true;
			hasBoss = true;
			break;
		}
		case Brutal:
		{
			numEnemies = 10;
			hasLegendary = true;
			hasBoss = true;
			break;
		}

	}
}
