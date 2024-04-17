#include <iostream>
using namespace std;

static long long GetSumOfOddNumbersInRange(long x , long y)
{
    long long sumOfOddNumbers = 0;

    for (long i = min(x, y) + 1; i < max(x, y); i++)
        if (i % 2 != 0)
            sumOfOddNumbers += i;

    return sumOfOddNumbers;
}

int main()
{
    short testCases = 0;
    cin >> testCases;

    long x, y;

    while (testCases > 0)
    {
        cin >> x >> y;
        cout << GetSumOfOddNumbersInRange(x, y) << "\n";
        testCases--;
    }

    return 0;
}