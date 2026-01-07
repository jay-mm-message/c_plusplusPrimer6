#include <iostream>
using namespace std;

int sum(int, int);

int main() {
	system("clear");
	cout << "1 + 2: " << sum(1, 2) << endl;
	return 0;
}

int sum(int a, int b) {
	return a + b;
}
