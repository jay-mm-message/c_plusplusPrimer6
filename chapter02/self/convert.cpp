#include <iostream>
using namespace std;

int stonetolb(int sts);

int main() {
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;

	return 0;
}

// stone to lb ( 14 * sts) 
int stonetolb(int sts) {
	return 14 * sts;
}