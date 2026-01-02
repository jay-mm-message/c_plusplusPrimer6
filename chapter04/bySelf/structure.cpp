#include <iostream>
using namespace std;

struct inflatable {
	char name[20] {};
	float volume;
	double price;
};

void p_struct(inflatable obj) {
	cout << "name: "	<< obj.name
		 << ", volume: " 	<< obj.volume
		 << ", price: " 	<< obj.price
		 << endl;
}

int main() {
	inflatable guest {
		"Glorious Gloria",
		1.88,
		29.99
	};

	p_struct(guest);

	return 0;
}