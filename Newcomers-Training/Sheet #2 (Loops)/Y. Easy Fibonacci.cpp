#include <iostream>
using namespace std;


static void PrintFibonacciSequence(short number)
{
	int previous = 0;
	int current = 1;

	int fibonacci = 0;

	while (number > 0)
	{
		cout << fibonacci << " ";

		previous = current;
		current = fibonacci;

		fibonacci = previous + current;

		number--;
	}
}

int main()
{
	short number;
	cin >> number;

	PrintFibonacciSequence(number);

	return 0;
}