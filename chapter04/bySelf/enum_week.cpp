#include <iostream>
using namespace std;

/*
Monday, Tuesday, Wednesday, Thursday, Friday

Weekend:
Saturday, Sunday
*/

enum Week {	Monday = 1,
			Tuesday,
			Wednesday,
			Thursday,
			Friday,
			Saturday,
			Sunday};

void p_week() {
	string week[] = {"Dummy", "Monday", "Tuesday", "Wednesday", 
			"Thursday", "Friday", "Saturday", "Sunday"};
	
	cout << "One week..." << endl << endl;
	int i = 1;
	for(auto day = Week::Monday ; day <= Week::Sunday ; 
		day = static_cast<Week>(i)) {
		cout << day << "." << week[day] << endl;
		++i;
	}
	return;
}

int main() {
	system("clear");
	p_week();
	cout << endl;
	return 0;
}