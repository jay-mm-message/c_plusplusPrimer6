#include <iostream>
using namespace std;

int main() {
	system("clear");
	enum colors { red = 1,
				orange,
				yellow,
				green,
				blue,
				violet,
				indigo};

	int i = 1;
	for(colors cl = colors::red ; cl <= colors::indigo ;
		cl = static_cast<colors>(i)) {
		switch(cl) {
			case colors::red:
				cout << "red.";
				break;
			case colors::blue:
				cout << "blue.";
				break;
			case colors::green:
				cout << "green.";
				break;
			case colors::indigo:
				cout << "indigo.";
				break;
			case colors::orange:
				cout << "orange.";
				break;
			case colors::violet:
				cout << "violet.";
				break;
			case colors::yellow:
				cout << "yellow.";
				break;
			default:
				break;
		}
		cout << endl;
		++i;
	}

	cout << endl;
	return 0;
}