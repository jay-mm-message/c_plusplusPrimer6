#include <iostream>
using namespace std;

int main() {
	system("clear");
	const unsigned short sz = 60;
	char buf[sz] {'\0'};
	char ch = 'A';
	for(auto i = 0 ; i < sz ; ++i) {
		buf[i] = ch;
		++ch;
	}
	buf[sz] = '\0';

	int idx = 0;
	while(buf[idx] != '\0') {
		cout << buf[idx] << ' ';
		++idx;
	}

	cout << "Cnt: " << idx << endl;
	cout << endl;
	return 0;
}