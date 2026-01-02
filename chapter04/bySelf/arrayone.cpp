#include <iostream>

int main() {
	using namespace std;
	const int Sz = 3;
	int yams[Sz];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	for(auto i = 0 ; i < Sz ; ++i) {
		cout << "yams[" << i << "]: " << yams[i];
		cout << endl;
	}
	cout << endl;

	int yams_costs[Sz] {20, 30, 5};
	for(auto i = 0 ; i < Sz ; ++i) {
		cout << "yams_cost[" << i << "] = "
		     << yams_costs[i]
			 << endl;
	}
	cout << endl;

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
	return 0;
}