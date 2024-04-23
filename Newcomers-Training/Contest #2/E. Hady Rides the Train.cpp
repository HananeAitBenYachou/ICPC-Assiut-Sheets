#include <iostream>
using namespace std;

int main()
{	
	long long id;
	cin >> id;

	long long rowNumber = id / 4;
	short columnNumber = id % 4;

	if (rowNumber % 2 != 0)	
		columnNumber = 3 - columnNumber;

	cout << rowNumber << " " << columnNumber;

	return 0;
}