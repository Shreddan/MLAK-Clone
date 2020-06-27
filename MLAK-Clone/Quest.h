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
	Quest();
	~Quest();

private:
	int qType;
};

