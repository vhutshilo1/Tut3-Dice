#include <iostream>
#include "Dice.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{ //testing the functions
	int arr[3], i;
	Dice d;
	Dice acess1, acess;
	float average1, average2;
	cout << "this is only testing the functionality of the roll(),the average not calculated based on this values," << endl;
	cout << "the generated random numbers are:" << endl;
	srand(time(NULL));
	for (i = 1; i <= 3; i++) {
		cout << "random number is:" << d.roll() << endl;
	}
	average1 = acess1.average(acess1, 3);
	average2 = acess.average(arr, 3);
	cout << "avarage1:" << average1 << endl;
	cout << "average2:" << average2 << endl;
	return 0;
}