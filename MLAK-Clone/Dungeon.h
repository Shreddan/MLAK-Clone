#pragma once

enum Difficulty
{
	VeryEasy,
	Easy,
	Intermediate,
	Hard,
	VeryHard,
	Brutal
};
class Dungeon
{
public:
	Dungeon(int Diff);
	~Dungeon();


	//Get-Set
	void setNumEnemies();
	void setMateriaAm(int i) { materiaAmount = i; }
	void setActive(bool active) { isActive = active; }


private:
	int Difficulty;
	int numEnemies;
	int materiaAmount;
	bool isActive;
	bool hasLegendary;
	bool hasBoss;
};

