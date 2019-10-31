//Justin Twining
//Lab 5 Figures
// 10/01/2018

#include <iostream>
#include "figures.h"
using std::cout; using std::cin; using std::endl;
int main() {
	int rows, c;
	char input{}, f{ 'f' };
	cout << "What shape do you want to make? " << endl;
	cout << "1. Square " << endl;
	cout << "2. Diagonal Line " << endl;
	cout << "3. Bottom Triangle " << endl;
	cout << "4. Top Triangle " << endl;
	cin >> c;
	cout << "Enter the size of the shape:" << endl;
	cin >> rows;
	if (c == 1) {
		cout << "Did you want the square to be filled or hollow? [f/h]: " << endl;
		cin >> input;
		if (input == f)
			filledsquare(rows);

		else
			hollowsquare(rows);
	}
		if (c == 2)
			diagonalline(rows);

		if (c == 3)
			bottomtriangle(rows);

		if (c == 4)
			toptriangle(rows);
		return 0;
	}