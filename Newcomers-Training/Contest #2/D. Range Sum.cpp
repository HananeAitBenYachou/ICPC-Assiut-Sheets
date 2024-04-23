#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

static long long GetSumOfNumbersInRange(long long l, long long r)
{
	long long minNumber = min(l, r);
	long long maxNumber = max(l, r);

	return ((maxNumber - minNumber + 1) * (minNumber + maxNumber)) / 2;
}

int main()
{
	int testCases = 0;
	cin >> testCases;

	long long l , r;

	while (testCases-- > 0)
	{
		cin >> l >> r;
		cout << GetSumOfNumbersInRange(l, r) << "\n";
	}

	return 0;
}