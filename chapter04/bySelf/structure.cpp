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

	inflatable pal {
		"Audacious Arthur",
		3.12,
		32.99
	};

	p_struct(guest);
	p_struct(pal);

	return 0;
}