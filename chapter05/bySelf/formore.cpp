#include <iostream>
using namespace std;

int main() {
	system("clear");
	const unsigned int nums = 5;
	unsigned long long fib[nums];
	for(auto i = 0 ; i <= nums ; ++i) {
		if (i == 1) fib[i] = 1;
		else if (i == 0) fib[i] = 1;
		else
			fib[i] = i * fib[i-1];
	}

	for(auto i = 0 ; i <= nums ; ++i) {
		cout << i << " != " << fib[i] << endl;
	}
	cout << endl;
	return 0;
}