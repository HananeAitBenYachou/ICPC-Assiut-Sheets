#include <iostream>
using namespace std;


static void PrintUpperPyramid(short n)
{
	for (short i = 0; i < n; i++)
	{
		for (short j = 0; j < (n - i - 1); j++)
			cout << " ";

		for (short k = 0; k < (2 * i + 1); k++)
			cout << "*";

		cout << "\n";
	}
}

static void PrintLowerPyramid(short n)
{
	for (short i = 0; i < n; i++)
	{
		for (short j = 0; j < i ; j++)
			cout << " ";

		for (short k = 0; k < ( (n - i) * 2)  - 1 ; k++)
			cout << "*";

		cout << "\n";
	}
}

static void PrintDiamond(short n)
{
	PrintUpperPyramid(n);
	PrintLowerPyramid(n);
}


int main()
{
	short n;
	cin >> n;

	PrintDiamond(n);

	return 0;
}