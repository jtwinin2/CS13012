//Justin Twining
//Lab 5 Figures
// 10/01/2018

#include <iostream>
#include "figures.h"

using std::cout; using std::cin; using std::endl;

void filledsquare(int rows) {
	for (int i = 1; i <= rows; ++i)
	{
		for (int j = 1; j <= rows; ++j)
			cout << "+ ";
		cout << endl;

	}
}

void hollowsquare(int rows) {
	for (int i = 1; i <= rows; ++i)
	{
		if (i == 1 || i == rows) {
			for ( int j = 1; j <= rows; ++j)
				cout << "+ ";
		}
		else
			for (int j = 1; j <= rows; ++j)
				if (j == 1 || j == rows)
					cout << "+ ";
				else
					cout << "  ";
		cout << endl;
	}
}

void diagonalline(int rows) {
	for (int i = 1; i <= rows; ++i) {
		for (int j = 1; j <= rows; ++j) {
			if (i == j)
				cout << "+";
			else
				cout << " ";
		}
		cout << endl;
	}
}

void bottomtriangle(int rows) {
	for (int i = rows; i >= 1; --i)
	{
		for (int space = 0; space<rows - i; ++space)
			cout << " ";
		for (int j = i; j <= 2 * i - 1; ++j)
			cout << "+";
		cout << endl;
	}
}

void toptriangle(int rows) {
	for (int i = 1; i <= rows; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << "+";
		}
		cout << endl;
	}
}
