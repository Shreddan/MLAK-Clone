#pragma once
#include <iostream>

enum Difficulties
{
	VeryEasy,
	Easy,
	Intermediate,
	Hard,
	VeryHard,
	Brutal,
	Spire
};
class Dungeon
{
public:
	Dungeon(int Diff, float x, float y);
	~Dungeon();


	//Setters
	void setNumEnemies();
	void setMateriaAm(int i) { materiaAmount = i; }
	void setActive(bool active) { isActive = active; }

	//Getters
	float getXCoord() const { return x; }
	float getYCoord() const { return y; }
	int getDifficulty() const { return difficulty; }
	int getNumEnemies() const { return numEnemies; }
	int getMateriaAm() const { return materiaAmount; }
	bool checkActive() const { return isActive; }
	bool checkLegendary() const { return hasLegendary; }
	bool checkBoss() const { return hasBoss; }
	bool checkCompleted() const { return isCompleted; }

private:
	float x;
	float y;
	std::string name;
	int difficulty;
	int numEnemies;
	int materiaAmount;
	bool isActive;
	bool isCompleted;
	bool hasLegendary;
	bool hasBoss;
};

