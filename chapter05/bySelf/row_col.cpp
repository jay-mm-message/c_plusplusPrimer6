#include <iostream>
using namespace std;
#include <ctime>

template<int ROW, int COL>
void p_arr(int (&buf)[ROW][COL]) {
	for(int r = 0 ; r < ROW ; ++r) {
		for(int c = 0 ; c < COL ; ++c) {
			cout << buf[r][c] << ' ';
		}
		cout << endl;
	}
}

template<int ROW, int COL>
void p_create(int (&buf)[ROW][COL]) {
	for(auto r = 0 ; r < ROW ; ++r) 
		for(auto c = 0 ; c < COL ; ++c)
			buf[r][c] = rand() % 9;
}

int main() {
	system("clear");
	const unsigned short row = 4;
	const unsigned short col = 5;
	int buf[row][col];
	p_create(buf);
	p_arr(buf);

	return 0;
}