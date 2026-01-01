#include <iostream>
using namespace std;

void simon(int v);

int main() {
	simon(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	
	return 0;
}

void simon(int v) {
	cout << "Simon says touch your toes "
		<< v
		<< " times."
		<< endl;
	return;
}