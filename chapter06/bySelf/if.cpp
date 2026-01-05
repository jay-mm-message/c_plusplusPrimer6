#include <iostream>
using namespace std;

int main() {
	system("clear");

	char buf[] = "The balloonist was an airhead\nwith lofty goals.";
	//char buf[] {"12345"};
	char ch = '\0';

	unsigned short spaces = 0;
	unsigned short total = 0;
	unsigned short i = 0;
	ch = buf[i++];
	while(ch != '.') {
		if (ch == '\0')
			break;
		if (ch == ' ')
			++spaces;
		++total;
		++i;
		ch = buf[i];
		
	}
	cout << spaces << " spaces. " << total;
	cout << " characters total in sentence\n";
	cout << endl; 
	return 0;
}