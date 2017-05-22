#ifndef PET_H
#define PET_H

class Pet {

private:
	int Filled;
	int Enjoyment;

	int GetHunger() const;
	int GetFun() const;
	void PassTime(int time = 1);

 public:
	Pets(int hunger = 0, int fun = 0);
	void Talk();
	void Eat(int food = 4);
	void Play(int fun = 4);
	int money;
	int addMoney;
}
#endif
