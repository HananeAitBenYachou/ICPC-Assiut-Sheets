#include <iostream>
using namespace std;

int main()
{
	short n;
	cin >> n;

	for (short i = 0; i < n; i++)
	{
		for (short j = 0; j < n; j++)
		{
			if (i == (n / 2) && j == (n / 2))
				cout << "X";

			else if (i == j)
				cout << "\\";
				
			else if (i == n - j - 1)
				cout << "\/";

			else
				cout << "*";
		}
		cout << "\n";
	}
	return 0;
}