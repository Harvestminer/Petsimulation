//------------------------------------------------------------------------
//	Jacob and Tylers Pet Simulation Project
//	Teacher/Advisor: Jeff (jd95)
//	Started 5/21/2017
//------------------------------------------------------------------------

//	List of things we need:
//	way to feed, way to play, way to buy, way to earn money, way to name,
//	way to save, way to view our money, and way to view our pets stats.
//	Costs $12 to buy a pet.
//------------------------------------------------------------------------

#include <iostream>

using namespace std;

class pets {
public:
	pets(int hunger = 0, int fun = 0);
	void Talk();
	void Eat(int food = 4);
	void Play(int fun = 4);
	int money;
	int addmoney;

private:
	int Filled;
	int Enjoyment;

	int GetHunger() const;
	int GetFun() const;
	void PassTime(int time = 1);

};



int main() {



}