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

void select_day(int t) {
	cout << endl;
	switch(t) {
		case 1:
			cout << "Monday" << endl;
			break;
		case 2:
			cout << "Tuesday" << endl;
			break;
		case 3:
			cout << "Wednesday" << endl;
			break;
		case 4:
			cout << "Thursday" << endl;
			break;
		case 5:
			cout << "Friday" << endl;
			break;
		case 6:
			cout << "Saturday" << endl;
			break;
		case 7:
			cout << "Sunday" << endl;
			break;
		default:
			break;
	}
}

void menu() {
	cout << "1. Monday\n"
		<< "2. Tuesday\n"
		<< "3. Wednesday\n"
		<< "4. Thursday\n"
		<< "5. Friday\n"
		<< "6. Saturday\n"
		<< "7. Sunday\n"
		<< endl;
}

int main() {
	system("clear");
	Week week = Week::Monday;
	menu();
	int type;
	cout << "Please type: ";
	cin >> type;
	select_day(type);
	
	cout << endl;
	return 0;
}