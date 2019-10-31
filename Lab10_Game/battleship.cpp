//Lab 9- Test
// 11/5/18
//Justin Twining

#include "battleship.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;
Location::Location() {
	x = -1;
	y = '*';
}
void Location::pick() {
	x = (rand() % 6) + 1;
	switch ((rand() % 6) + 1) {
	case 1:y = 'a'; break;
	case 2:y = 'b'; break;
	case 3:y = 'c'; break;
	case 4:y = 'd'; break;
	case 5:y = 'e'; break;
	case 6:y = 'f'; break;
	}
}

void Location::fire() {
	cout << "Input x:" << endl;
	cin >> x;
	cout << "Input y:" << endl;
	cin >> y;
}

void Location::print() const {
	cout << y << x << endl;
}

bool compare(const Location &loc1, const Location &loc2) {
	return (loc1.x == loc2.x && loc1.y == loc2.y);
}
Ship::Ship() {
	sunk = false;
}
bool Ship::match(const Location &loc1) const {
	return (compare(loc, loc1)) ? true : false;
}


void Ship::sink() {
	this->sunk = true;
}
void Ship::setLocation(const Location &loc1) {
	loc = loc1;
}

void Ship::printShip()const {
	loc.print();

	if (isSunk()) {
		cout << "Ship is destroyed" << endl;
	}
	else {
		cout << "Ship is still up" << endl;
	}
}

void Fleet::deployFleet() {
	int count = 0;
	while (count < fleetSize) {
		Location randomLocation;
		randomLocation.pick();
		if (check(randomLocation) == -1) {
			ships[count].setLocation(randomLocation);
			count++;
		}
	}
}



int Fleet::check(const Location &loc1) const {
	for (int i = 0; i < fleetSize; i++) {
		if (ships[i].match(loc1)) {
			return i;
		}
	}
	return -1;
}

bool Fleet::operational() const {
	for (int i = 0; i < fleetSize; i++) {
		if (!ships[i].isSunk()) {
			return true;
		}
	}
	return false;
}

bool Fleet::isHitNSink(const Location &loc1) {
	if (check(loc1) != -1) {
		int index = check(loc1);
		ships[index].sink();
		return true;
	}
	else {
		return false;
	}
}

void Fleet::printFleet() const {
	for (int i = 0; i < fleetSize; i++) {
		ships[i].printShip();
	}
}