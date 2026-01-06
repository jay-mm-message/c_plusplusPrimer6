#include <iostream>
using namespace std;
#include <fstream>


int main() {
	system("clear");
	const string fileName = "test_cast.txt";
	ofstream outFile(fileName);
	outFile << "Hello World\n";
	outFile << "123\n";
	outFile << endl;
	outFile.close();

	ifstream inFile(fileName);
	string buf {};
	if (inFile) {
		while(inFile.good()) {
			string tmp_buf {};
			inFile >> tmp_buf;

			buf += ' ' + tmp_buf;
		}
		inFile.close();
		cout << "buf: " << buf << endl;
	} else {
		cerr << "failed open file.\n";
		return 1;
	}
	cout << endl;
	return 0;
}
