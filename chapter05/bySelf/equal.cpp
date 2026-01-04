// equal.cpp -- equality vs assignment
#include <iostream>
int main()
{
	system("clear");
	using namespace std;
    int quizscores[10] =
        { 20, 20, 20, 20, 20, 19, 20, 18, 20, 20};

    cout << "Doing it right:\n";
    int i;
	const unsigned short sz = sizeof(quizscores) / sizeof(int);
    for (i = 0; i < sz ; i++) {
		if (quizscores[i] == 20)
        	cout << "quiz " << i << " is a 20\n";		
	}
// Warning: you may prefer reading about this program
// to actually running it.
    cout << "Doing it dangerously wrong:\n";
    for (i = 0; i < sz ; i++)
		if (quizscores[i] != 20)
			cout << "quiz " << i << " not is a 20\n";
	// cin.get();
    return 0;
}
