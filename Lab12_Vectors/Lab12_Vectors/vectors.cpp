//Lab 12 Vectors
// Justin Twining
// 4/22/2019

#include <iostream>
#include <vector>
#include <algorithm>

using std::cin; using std::cout; using std::endl; using std::vector;

int main()
{
	vector<int> v;
	int num;
	char ch;
	do {
		cout << "enter operation[a/r/q] and a number : ";
		cin >> ch;
		if (ch == 'q' || ch == 'Q')
			break;
		cin >> num;
		switch (ch) {
		case 'a':
		case 'A':
		{vector<int>::iterator found;
		found = find(v.begin(), v.end(), num);

		if (found != v.end()) { // if found, erase
			v.erase(found);
		}
		v.push_back(num);
		break;
		}
		case 'r':
		case 'R':
		{ vector<int>::iterator it;
		it = find(v.begin(), v.end(), num);
		if (it != v.end())
			v.erase(it);
		break;
		}
		default:
			cout << "Wrong choice" << endl;
		}

		cout << "your numbers : ";
		for (vector<int>::iterator ip = v.begin(); ip != v.end(); ++ip)
			cout << *ip << " ";
		cout << endl;
	} while (ch != 'q' && ch != 'Q');
	return 0;
}
