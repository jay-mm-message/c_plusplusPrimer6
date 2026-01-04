#include <iostream>
using namespace std;

int main() {
	system("clear");
	unsigned int cnt = 0;
	char ch = '\0';
	do {
		cin >> ch;
		++cnt;
	} while(ch != '#');

	cout << endl << cnt << " characters read\n";
	cout << ch << endl;
	cout << endl;

	return 0;
}