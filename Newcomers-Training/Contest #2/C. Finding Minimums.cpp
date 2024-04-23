#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	long long number;
	long long minimum = LLONG_MAX;

	int counter = 0;

	for (int i = 1; i <= n; i++)
	{
		cin >> number;

		minimum = min(number, minimum);

		if (++counter == k || i == n)
		{
			cout << minimum << " ";

			minimum = LLONG_MAX;
			counter = 0;
		}
	}

	return 0;
}