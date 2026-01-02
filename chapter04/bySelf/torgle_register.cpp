#include <iostream>
using namespace std;
#include <string>
#include <variant>

struct torole_register {
	unsigned int SN : 4;
	unsigned int : 4;
	bool goodIn : 1;
	bool goodTorole : 1;
};

union one4all {
	int n_val;
	long lg_val;
	double d_val;
};

void p_union_int(int n_val, std::string tags) {
	cout << tags
		<< ": "
		<< n_val
		<< ", size: "
		<< sizeof(n_val)
		<< endl;
};

void p_union_double(double d_val, std::string tags) {
	cout << tags
		<< ": "
		<< d_val
		<< ", size: "
		<< sizeof(d_val)
		<< endl;
};

void p_union_long(long lg_val, std::string tags) {
	cout << tags
		<< ": "
		<< lg_val
		<< ", size: "
		<< sizeof(lg_val)
		<< endl;
};

struct widget {
	char brand[20];
	int type;
	union {
		long id_num;
		char id_char[20];
	};
};

struct widget_2 {
	std::string brand;
	std::variant<long, std::string> id;
};

void test_case_one4all(one4all pail) {
	pail.n_val = 15;
	p_union_int(pail.n_val, "pail.n_val");

	pail.d_val = 1.38;
	p_union_double(pail.d_val, "pail.d_val");
	
	pail.lg_val = 123L;
	p_union_long(pail.lg_val, "pail.lg_val");
}

void test_case_widget(widget prize) {
	cout << "prize: ";
	if (prize.type == 2) {
		cin >> prize.id_num;
	} else {
		cin >> prize.id_char;
	}

	cout << "display prize: ";
	if (prize.type == 2) {
		cout << prize.id_num;
	} else {
		cout << prize.id_char;
	}
}

void test_case_cin() {
	cout << "Please cin: ";
	string word;
	cin >> word;
	cout << "-> word: " << word << endl;
}

int main() {
	test_case_cin();
	
	torole_register reg_a {14, true, false};

	one4all pail {};
	test_case_one4all(pail);
	widget prize {"abc", 1};

	cout << endl;
	return 0;
}