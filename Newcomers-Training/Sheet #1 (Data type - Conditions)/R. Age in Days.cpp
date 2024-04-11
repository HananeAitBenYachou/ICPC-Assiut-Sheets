#include <iostream>
using namespace std;

int main()
{
	long ageInDays;

	cin >> ageInDays;

	short numberOfYears, numberOfMonths, numberOfDays;

	numberOfYears = ageInDays / 365;
	ageInDays %= 365;

	numberOfMonths = ageInDays / 30;
	numberOfDays = ageInDays % 30;

	cout << numberOfYears << " years\n";
	cout << numberOfMonths << " months\n";
	cout << numberOfDays << " days\n";

	return 0;
}