#include <iostream>
#include <cmath>
using namespace std;

static long CountDivisionsBy2(long long number)
{
	long counter = 0;

	while ((number & 1) == 0)
	{
		number >>= 1;
		counter++;
	}

	return counter;
}


int main()
{	
	long n;
	cin >> n;

	long long number;
	long maxTimes = 0;

	while (n-- > 0)
	{
		cin >> number;
		maxTimes = max(maxTimes, CountDivisionsBy2(number));
	}

	cout << maxTimes;

	return 0;
}