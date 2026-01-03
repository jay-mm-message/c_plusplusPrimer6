// init_ptr.cpp -- initialize a pointer
#include <iostream>

struct student {
	int id;
	char name[20];
};

int main()
{
	system("clear");

    using namespace std;
    int higgens = 5;
    int * pt = &higgens;

	int *n_pt;
	double *d_pt;
	char *c_pt;
	student *st_pt;

	cout << "sizeof(int*): " << sizeof(n_pt) << endl;
	cout << "sizeof(double*): " << sizeof(d_pt) << endl;
	cout << "sizeof(char*): " << sizeof(c_pt) << endl;
	cout << "sizeof(struct student*): " << sizeof(st_pt) << endl;

	cout << endl;

    cout << "Value of higgens = " << higgens
         << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt
         << "; Value of pt = " << pt << endl;
    // cin.get();
	cout << endl;
    return 0; 
}
