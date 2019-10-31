// Lab 7 Line Justify
// Justin Twining
// 3/11/2019 

#include <string>
#include <iostream>
#include <limits>  
using std::cout; using std::cin; using std::endl; using std::string;

const int maxwidth = 75;
const int minwidth = 40;

int main() {
	string s;
	int pos = -1;
	char quit = 'y';

	do {
		cout << "Enter string between 40 and 75 characters and hit return: ";
		getline(cin, s);
		cout << "done? [y/n]";
		cin.get(quit);
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	} while (quit != 'y');
	if (s.length() < minwidth || s.length() > maxwidth) {
		cout << "Incorrect, The string is not between 40 and 75 characters.";
		cout << "\nit was: '" << s.length() << "' characters long";
	}
	else {
		pos = s.find_first_of(".,?!;");
		while (pos != string::npos) {
			s.insert(pos, " ");
			pos = s.find_first_of(".,?!;", pos + 2);
		}
		if (s.length() < maxwidth && s.length() > minwidth) {
			while (s.length() < 75) {
				pos = s.find_first_of(' ');
				while (pos != string::npos && s.length() < 75) {
					if (!(isspace(s[pos - 1])))
						s.insert(pos, "  ");
					pos = s.find_first_of(' ', pos + 2);
				}
			}
		}
		cout << s;
	}
	cin.get();
}
