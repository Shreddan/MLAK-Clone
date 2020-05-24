#pragma once
#include "Renderable.h"

class Game
{
public:
	Game();
	~Game();


	struct State
	{
		State(int ID) { this->ID = 0; }

		int ID;
		std::vector<Renderable> renderables;
	};


	//Time Funcs
	void incrementDay() { Day++;};
	void incremHour() {Hour++;}
	void incremTA() {timeAllowed++;}

	void setHour(int h) { Hour = h; }

	int getDay() const { return Day; }
	int getHour() const { return Hour; }
	int getTA() const { return timeAllowed; }

	void addRenderable(int ind, const std::string path);
	
	
	std::vector<State> states;

private:
	int Hour;
	int Day;
	int timeAllowed;

	
	
};

