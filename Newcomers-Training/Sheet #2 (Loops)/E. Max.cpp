#include <iostream>
using namespace std;

int main()
{
	short n;
	cin >> n;

	long number;
	long maxNumber = -1;

	for (int i = 1; i <= n; i++)
	{
		cin >> number;

		if (number > maxNumber)
			maxNumber = number;
	}


	cout << maxNumber;

	return 0;
}