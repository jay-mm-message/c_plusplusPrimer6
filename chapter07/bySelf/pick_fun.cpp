#include <iostream>
using namespace std;

void pick(int number) {
	double result = 1.0;
	for(int pick = 6 ; pick > 0 ; number--, pick--) {
		result = result * number / pick;
	}
	cout << "winner number: " << result << endl;
}

int main() {
	system("clear");
	pick(51);

	cout << endl;
	return 0;
}
