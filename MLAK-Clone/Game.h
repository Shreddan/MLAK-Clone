#pragma once
class Game
{
public:
	Game();
	~Game();


	//Time Funcs
	void incrementDay() { Day++;};
	void incremHour() {Hour++;}
	void incremTA() {timeAllowed++;}

	void setHour(int h) { Hour = h; }

	int getDay() const { return Day; }
	int getHour() const { return Hour; }
	int getTA() const { return timeAllowed; }

	


private:
	int Hour;
	int Day;
	int timeAllowed;

};

