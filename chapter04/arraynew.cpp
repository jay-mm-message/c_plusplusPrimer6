// arraynew.cpp -- using the new operator for arrays
#include <iostream>
int main()
{
	system("clear");
    using namespace std;
    double * p3 = new double [3]; // space for 3 doubles
    p3[0] = 0.2;                  // treat p3 like an array name
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1;                  // increment the pointer
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1;                  // point back to beginning
    delete [] p3;                 // free the memory
    // cin.get();

	float *p4 = new float[4];
	for(auto i = 0 ; i < 4 ; ++i) {
		p4[i] = 100 + i;
	}

	for(auto i = 0 ; i < 4 ; ++i) {
		cout << p4[i] << ' ';
	}

	delete [] p4;

	cout << endl;
    return 0; 
}
