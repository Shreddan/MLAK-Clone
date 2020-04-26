#pragma once
class Game
{
public:
	Game();
	~Game();


	//Time Funcs
	void incrementDay() { Day++; };
	void incremHour() { if (Hour < 20) { Hour++; } else { Hour = 8; } }
	void incremTA() { timeAllowed++;}

	int getDay() const { return Day; }
	int getHour() const { return Hour; }
	int getTA() const { return timeAllowed; }

	


private:
	int Hour;
	int Day;
	int timeAllowed;

};

