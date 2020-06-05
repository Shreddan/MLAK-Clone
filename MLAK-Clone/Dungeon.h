#pragma once

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
	Dungeon(int Diff);
	~Dungeon();


	//Setters
	void setNumEnemies();
	void setMateriaAm(int i) { materiaAmount = i; }
	void setActive(bool active) { isActive = active; }

	//Getters
	int getDifficulty() const { return Difficulty; }
	int getNumEnemies() const { return numEnemies; }
	int getMateriaAm() const { return materiaAmount; }
	bool checkActive() const { return isActive; }
	bool checkLegendary() const { return hasLegendary; }
	bool checkBoss() const { return hasBoss; }

private:
	int Difficulty;
	int numEnemies;
	int materiaAmount;
	bool isActive;
	bool hasLegendary;
	bool hasBoss;
};

