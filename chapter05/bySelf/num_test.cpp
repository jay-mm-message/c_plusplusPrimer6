#include <iostream>
using namespace std;

int main() {
	system("clear");

	int times;
	cout << "type in: ";
	cin >> times;
	int i = 0;
	for( ; i < times ; ++i) {
		cout << "i = " << i << endl;
	}
	cout << "Done now that i = "  << i << endl;
	return 0;
}