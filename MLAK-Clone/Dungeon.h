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
	Dungeon();
	~Dungeon();



private:
	int Difficulty;

};

