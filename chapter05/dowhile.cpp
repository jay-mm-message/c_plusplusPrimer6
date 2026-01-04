// dowhile.cpp -- exit-condition loop
#include <iostream>
int main()
{
	system("clear");
    using namespace std;
    int n;

    cout << "Enter neumbers in the range 1-10 to find ";
    cout << "my favorite number\n";
    do
    {
        cin >> n;       // execute body
    } while (n != 7);   // then test
    cout << "Yes, 7 is my favorite.\n" ;
    // cin.get();
    // cin.get();

	double prices[5] {4.99, 6.99, 7.99, 8.99, 10.99};
	for(double x : prices) {
		cout << x << ' ';
	}
	cout << endl;

	for(double &x : prices) {
		x = x * 100;
	}

	for(double x : prices) {
		cout << x << ' ';
	}
	cout << endl;
    return 0; 
}
