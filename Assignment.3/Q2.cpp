#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;
int main()
{
	int lottery[5];
	int user[5];
	int c = 0;

	srand(time(NULL));

	for (int i = 0; i < 5; i++)
	{
		lottery[i] = (rand() % 10);
	}

	cout << "Enter your lottery numbers: ";
	for (int i = 0; i < 5; i++)
	{
	cin >> user[i];
	}

	cout << "\nLottery arrays are: ";
	for (int i = 0; i < 5; i++)
	{
		cout << lottery[i];
	}
	for (int i = 0; i < 5; i++)
	{
		if (user[i] == lottery[i])
			c++;
		if (c == 5)
			cout << "\ngrand prize winner! ";
	}

	cout << "\nThe number of matching digits: " << c << endl;
}
