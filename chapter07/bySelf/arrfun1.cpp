#include <iostream>
using namespace std;

int sum(int [], int);
void create_cookies(int [], int);
void p_cookies(int [], int);

int main() {
	system("clear");
	const int ArSize = 8;
	int cookies[ArSize] {0};
	create_cookies(cookies, ArSize);
	p_cookies(cookies, ArSize);

	// int sum_result = sum(cookies, ArSize);

	cout << "Total cookies eaten: " << sum(cookies, ArSize) << endl;
	cout << "Total cookies eaten: " << sum(cookies + 4, 4) << endl;

	cout << endl;
	return 0;
}

void p_cookies(int arr[], int n) {
	for(int i = 0 ; i < n ; ++i) {
		cout << *(arr+i) << ' ';
	}
	cout << endl;
}

void create_cookies(int arr[], int n) {
	for(int i = 0, j = 1 ; i < n ; ++i, j *= 2) {
		*(arr+i) = j;
	}
}

int sum(int arr[], int n) {
	cout << "address of arr: " << arr << endl;
	int result {0};
	for(int i = 0 ; i < n ; ++i) {
		result = result + *(arr+i);
	}
	return result;
}
