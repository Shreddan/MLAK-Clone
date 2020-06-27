#pragma once

enum QuestType
{
	FindX,
	KillX,
	Explore,
	Train
};

class Quest
{
public:
	Quest(const int qType);
	~Quest();

private:
	int qType;
};

