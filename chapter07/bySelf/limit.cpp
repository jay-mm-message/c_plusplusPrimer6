#include <iostream>
using namespace std;

int fill_array(int [], int);
void create_array(int [], int);
void p_array(const int [], int);
void revalue(int , int [], int);
void p_array_2(const int *, const int *);

int main() {
	system("clear");
	const int ArSize = 10;
	int numbers[ArSize] {0};
	create_array(numbers, ArSize);
	cout << "Max: " << fill_array(numbers, ArSize) << endl;
	p_array(numbers, ArSize);
	revalue(10, numbers, ArSize);
	p_array_2(numbers + 0, numbers + ArSize);
	//p_array(numbers, ArSize);

	int sage = 50;
	const int *pt = &sage;
	cout << *pt << endl;

	cout << endl;
	return 0;
}

void p_array_2(const int *begin, const int *end) {
	cout << __FUNCTION__ << endl;
	const int *p = nullptr;

	for(p = begin ; p != end ; ++p) {
		cout << *p << ' ';
	}
	cout << endl;
}

void revalue(int r, int arr[], int n) {
	for(int i = 0 ; i < n ; ++i) {
		*(arr+i) = *(arr+i) * r;
	}
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
