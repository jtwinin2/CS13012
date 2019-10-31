//Lab 9 Game
//Justin Twining
// 4/1/2019

#include <iostream>
#include "battleship.h"
using std::cout; using std::cin; using std::endl;

int main()
{
	int c;
	Fleet fl; 
	fl.deployFleet();
	cout << "Enter 1 to print Fleet : "<< endl;
	cout << "Or enter any other number to start the game :" << endl;
	cin >> c;
	if (c == 1) fl.printFleet();
	while (fl.operational()) {
		Location loc;
		loc.fire();
		bool p = fl.isHitNSink(loc);
		cout << " result : ";
		if (p) cout << "hit" << endl;
		else cout << "miss" << endl;
		cout << "Enter 1 to print Fleet : " << endl;
		cin >> c;
		if (c == 1) fl.printFleet();
	}
	return 0;
}