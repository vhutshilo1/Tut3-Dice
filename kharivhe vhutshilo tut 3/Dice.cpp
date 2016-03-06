#include "Dice.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

Dice::Dice()
{
}
//method roll for generating a random number of a dice 
int Dice::roll() {

	return rand() % 6 + 1;    //this ensures the range of 1-6
}

//function to calculate the average based on the number of rolls and the values given by each dice roll
float Dice::average(Dice objects, int number) {
	int i;
	int ans = 0;
	for (i = 1; i <= number; i++) {
		ans += objects.roll(); //this takes the value of the rolled dice and adds it to the initial one
	}
	return ans / number;    //average is given by the sum of values of rolls by the total number of rolls taken
}
//function to calculate the average of values of the rolled diced stored in an array
float Dice::average(int arrays[], int size) {
	int i, ans = 0;
	Dice objects;
	for (i = 1; i <= size; i++) {
		arrays[i] = objects.roll();//this stores the values given by a roll within an array
		ans += arrays[i]; //this adds up the values given by each roll and save the sum in ans
	}
	return ans / size; //average is given by the sum of values of rolls by the total number of rolls taken
}

Dice::~Dice()
{
}


