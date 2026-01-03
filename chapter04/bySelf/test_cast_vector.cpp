#include <iostream>
using namespace std;
#include <array>

int main() {
	system("clear");
	const int sz = 10;
	array<double, sz> ad;
	int i = 1;
	for(auto it = ad.begin() ; it != ad.end() ; ++it) {
		*it = 100 + i;
		++i;
	}

	for(auto it = ad.begin() ; it != ad.end() ; ++it) {
		cout << *it << ' ';
	}
	cout << endl;

	cout << endl;
	return 0;
}