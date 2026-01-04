#include <iostream>
using namespace std;
#include <cstring>

int main() {
	system("clear");
	
	char buf[][4] = {"123", "123", "222", "111"};

	for(int i = 1 ; i < 4 ; ++i) {
		if (strcmp(buf[i], buf[i-1]) < 0) {
			cout << buf[i] << " < " << buf[i-1] << endl;
		} else if (strcmp(buf[i], buf[i-1]) > 0) {
			cout << buf[i] << " > " << buf[i-1] << endl;  
		} else {
			cout << buf[i] << " == " << buf[i-1] << endl;
		}
	}

	cout << endl;
	return 0;
}