#include <iostream>
using namespace std;

int main() {
	system("clear");

	double arr[] {21.1, 32.8, 23.4, 45.2, 37.4};
	double *p = arr;
	const unsigned short sz = sizeof(arr) / sizeof(double);

	for(auto i = 0 ; i < sz ; ++i) {
		cout << *(p + i) << ' ';
	}
	cout << endl;
	cout << *p++ << endl;
	cout << *p << endl;
	cout << endl;
	return 0;
}