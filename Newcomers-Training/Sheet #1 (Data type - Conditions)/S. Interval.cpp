#include <iostream>
using namespace std;

int main()
{
	float number;
	cin >> number;

	if (number < 0 || number > 100)
	{
		cout << "Out of Intervals";
		return 0;
	}

	cout << "Interval ";

	if (number >= 0 && number <= 50)
	{
		if (number <= 25)
			cout << "[0,25]";
		else
			cout << "(25,50]";
	}
	
	else
	{
		if (number <= 75)
			cout << "(50,75]";
		else
			cout << "(75,100]";
	}

	return 0;
}