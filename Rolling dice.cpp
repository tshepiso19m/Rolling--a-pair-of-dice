// Rolling dice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <cmath>

int main() {
	int Num1, Num2;
	int sum = 0;
	int Dice;

	cout << " Enter two numbers ranging from 1 to 6 " << endl;
	cin >> Num1 >> Num2;

	sum = Num1 + Num2;
	if (sum == 7 || sum == 11) {
		Dice = 1;
	}
	else if (sum == 2) {
		Dice = 2;
	}
	else if (sum == 12) {
		Dice = 3;
	}
	else if (sum != 7 || sum != 11 || sum != 2 || sum != 12) {
		Dice = 4;

	}

	switch (Dice) {
	case 1:
		cout << " You win!! ";
		break;

	case 2:
		cout << " Snake eyes !! ";
		break;

	case 3:
		cout << " Good shot!! ";
		break;

	case 4:
		cout << " Try again!! ";
		break;


	}





	return 0;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
