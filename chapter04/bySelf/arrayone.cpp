#include <iostream>

void p_array(int arr[], const int sz,
			const std::string tags) {

	for(auto i = 0 ; i < sz ; ++i) {
		std::cout << tags
				  << "[" << i << "]: " 
				  << arr[i];
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void p_array(char arr[], const int sz,
			const std::string tags) {

	for(auto i = 0 ; i < sz ; ++i) {
		std::cout << tags
				  << "[" << i << "]: " 
				  << arr[i];
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

int main() {
	using namespace std;
	const int Sz = 3;
	int yams[Sz];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	p_array(yams, Sz, "yams");

	int yams_costs[Sz] {20, 30, 5};

	p_array(yams_costs, Sz, "yams_cost");

	int yams_total{0};

	for(auto n : yams) {
		yams_total += n;
	}
	cout << "yams_total: "
		 << yams_total 
		 << endl;

	int yams_costs_total{0};
	for(auto n : yams_costs) {
		yams_costs_total += n;
	}
	cout << "yams_costs_total: "
		 << yams_costs_total
		 << endl;

	cout << endl;

	int things[] {1, 5, 3, 8};
	p_array(things, sizeof(things)/sizeof(int), "things");

	char c_tlifs[] {'h', 'i', 112, '\0'};
	p_array(c_tlifs, sizeof(c_tlifs)/sizeof(char),
			"tlifs");

	return 0;
}