#include <iostream>
using namespace std;

int main()
{
	short n;
	long value;

	cin >> n;

	short evenCounter = 0, oddCounter = 0, positiveCounter = 0, negativeCounter = 0;

	for (int i = 1; i <= n; i++)
	{
		cin >> value;

		if (value % 2 == 0)
			evenCounter++;

		else if (value % 2 != 0)
			oddCounter++;

		if (value > 0)
			positiveCounter++;
		else if (value < 0)
			negativeCounter++;
	}

	cout << "Even: " << evenCounter << "\n";
	cout << "Odd: " << oddCounter << "\n";
	cout << "Positive: " << positiveCounter << "\n";
	cout << "Negative: " << negativeCounter << "\n";

	return 0;

}