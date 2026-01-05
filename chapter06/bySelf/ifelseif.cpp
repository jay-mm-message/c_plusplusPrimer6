#include <iostream>
using namespace std;

void set() {
	cout << "Please type: a, b, c ?";
	char ch = '\0';
	cin >> ch;

	if (ch == 'a') {
		cout << "Too low -- guess again. " << endl;
	} else if (ch == 'b') {
		cout << "Too high -- guess again." << endl;
	} else {
		cout << ch << " is right!\n";
	}
}

int main() {
	system("clear");
	set();
	set();
	set();
	return 0;
}