//Lab 5 Basal Metabolic Rate
//Justin Twining
// 9/30/2018

#include <iostream>
using std::cout; using std::cin; using std::endl;

double bmrmen();
double bmrwomen();
int hfeet, hinches, height, weight, age, bmrw, bmrm, doughnuts;
const int msd = 195; //medium sized doughnut contains 195 calories

int main()
{
	int gender;
	cout << "What is your gender?" << endl;
	cout << "1) Female" << endl;
	cout << "2) Male" << endl;
	cin >> gender;
	while (gender <= 0 || gender >= 3)
	{
		cout << "Incorrect number, please enter either 1 for female or 2 for male." << endl;
		cin >> gender;
	}
	if (gender == 1) {
		bmrwomen();
	}
	else {
		bmrmen();
	}
	return 0;
}

	double bmrwomen() {
		cout << "What is your height in feet?" << endl;
		cin >> hfeet;
		cout << "What is your height in inches?" << endl;
		cin >> hinches;
		height = (hfeet * 12) + hinches;
		cout << " How much do you weigh in pounds?" << endl;
		cin >> weight;
		cout << "How old are you (in years)?" << endl;
		cin >> age;
		double bmrw = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
		doughnuts = bmrw / msd;
		cout << " Your BMR is: " << bmrw << "and you can eat " << doughnuts << "doughnuts per day." << endl;
		return 0;
	}

	double bmrmen() {
		cout << "What is your height in feet?" << endl;
		cin >> hfeet;
		cout << "What is your height in inches?" << endl;
		cin >> hinches;
		height = (hfeet * 12) + hinches;
		cout << " How much do you weigh in pounds?" << endl;
		cin >> weight;
		cout << "How old are you (in years)?" << endl;
		cin >> age;
		double bmrm = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
		doughnuts = bmrm / msd;
		cout << " Your BMR is: " << bmrm << "and you can eat " << doughnuts << " doughnuts per day." << endl;
		return 0;
	}