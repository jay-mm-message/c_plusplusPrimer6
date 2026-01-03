// addpntrs.cpp -- pointer addition
#include <iostream>
using namespace std;

void p_wages(double wages[], const int sz) {
	// c-style
	for(auto *p = wages ; p != &wages[sz] ; ++p) {
		cout << *p << ' ';
	}
	cout << endl;
	// c++ style
	double *p = wages;
	for(auto i = 0 ; i < sz ; ++i) {
		cout << *(p + i) << ' ';
	}
	cout << endl;
	return;
}

void p_stacks(short stacks[], const int sz) {
	// c-style
	for(auto *p = stacks ; p != &stacks[sz] ; ++p) {
		cout << *p << ' ';
	}
	cout << endl;
	// c++ style
	short *p = &stacks[0];
	for(auto i = 0 ; i < sz ; ++i) {
		cout << *(p + i) << ' ';
	}
	cout << endl;
	return;
}

int main()
{
	system("clear");
    using namespace std;

	const int narr_sz = 3;
    double wages[narr_sz] = {10000.0, 20000.0, 30000.0};
    short stacks[narr_sz] = {3, 2, 1};

	p_wages(wages, narr_sz);
	p_stacks(stacks, narr_sz);
// Here are two ways to get the address of an array
    double * pw = wages;     // name of an array = address
    short * ps = &stacks[0]; // or use address operator
// with array element
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0] 
         << ", stacks[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation\n";

    cout << "*stacks = " << *stacks
         << ", *(stacks + 1) =  " << *(stacks + 1) << endl;

    cout << sizeof(wages) << " = size of wages (double[3]) array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";

	cout << sizeof(stacks) << " = size of stacks (short[3]) array\n";
    cout << sizeof(ps) << " = size of ps pointer\n";
    // cin.get();

	
    return 0; 
}
