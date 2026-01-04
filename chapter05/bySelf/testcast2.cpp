#include <iostream>
using namespace std;

int main() {
	
	system("clear");
	int x = 20;
	{
		cout << ++x << endl;
		int x = 100;
		cout << ++x << endl;
	}
	cout << x << endl;
	return 0;
}