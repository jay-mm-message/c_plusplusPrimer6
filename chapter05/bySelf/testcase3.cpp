#include <iostream>
using namespace std;

int main() {
	system("clear");

	string word = "hello world";
	cout << word << endl;

	for(int i = 0, j = word.size() - 1 ; j >= i ; --j, ++i) {
		char ch = word.at(i);
		word.at(i) = word.at(j);
		word.at(j) = ch;
		// char ch = word[i];
		// word[i] = word[j];
		// word[j] = ch;
	}
	cout << word << endl;
	return 0;
}