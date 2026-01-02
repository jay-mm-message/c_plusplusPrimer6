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

inflatable copy(inflatable src) {
	inflatable ret {};
	strcpy(ret.name, src.name);
	ret.volume = src.volume;
	ret.price = src.price;
	return ret;
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

	inflatable guest2 = copy(guest);
	p_struct(guest2);

	inflatable choice = guest2;
	p_struct(choice);

	const int sz = 10;
	inflatable buf[sz] {};
	for(auto i = 0 ; i < sz ; ++i) {
		buf[i] = copy(guest);
	}
	for(auto e : buf) {
		p_struct(e);
	}
	cout << endl;

	inflatable guests[2] {
		{"Bambi", 0.5, 21.99},
		{"Godzilla", 2000, 565.99}
	};

	for(auto e : guests) {
		p_struct(e);
	}
	return 0;
}