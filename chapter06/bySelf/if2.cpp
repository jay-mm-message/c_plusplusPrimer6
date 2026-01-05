#include <iostream>
using namespace std;

void set() {
	char ch;
	cout << "Please type: a, b?";
	cin.get(ch).get();
	
	if (ch == 'a') {
		cout << "That's right!\n";
	} else {
		cout << "You'd better review Chapter 1 again.\n";
	}
}
int main() {
	system("clear");
	
	set();
	set();

	cout << endl;
	return 0;
}