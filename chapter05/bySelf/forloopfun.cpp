#include <iostream>
using namespace std;

void smart_fun(const int val) {
	cout << "val: " << val << endl;
	return;
}

int main() {
	system("clear");
	const int times = 5;
	for(auto i = 0 ; i < times ; ++i) {
		smart_fun(i);
	}
	cout << endl;
	return 0;
}