
#ifndef DICE_H
#define DICE_H

class Dice
{
public:
	Dice();
	int roll();
	float average(Dice, int);
	float average(int[], int);
	~Dice();
};

#endif  // DICE_H
