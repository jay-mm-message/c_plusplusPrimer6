#include <iostream>
using namespace std;

void cheers(unsigned short n) {
	while(n > 0) {
		cout << "Cheers!" << endl;
		--n;
	}
}

int main() {
	system("clear");

	cheers(5);

	return 0;
}
