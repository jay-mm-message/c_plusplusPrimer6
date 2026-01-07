#include <iostream>
using namespace std;

int fill_array(int [], int);
void create_array(int [], int);
void p_array(const int [], int);

int main() {
	system("clear");
	const int ArSize = 10;
	int numbers[ArSize] {0};
	create_array(numbers, ArSize);
	cout << "Max: " << fill_array(numbers, ArSize) << endl;
	p_array(numbers, ArSize);

	cout << endl;
	return 0;
}

void p_array(const int arr[], int n) {
	for(int i = 0 ; i < n ; ++i) {
		cout << *(arr+i) << ' ';
	}
	cout << endl;
	//*(arr+2) = 2;
}

void create_array(int arr[], int n) {
	srand(time(nullptr));
	for(int i = 0 ; i < n ; ++i) {
		*(arr+i) = rand() % 20;
	}
}

int fill_array(int arr[], int n) {
	int max = 0;
	for(int i = 0 ; i < n ; ++i) {
		if (max < *(arr+i))
			max = *(arr+i);
	}
	return max;
}
