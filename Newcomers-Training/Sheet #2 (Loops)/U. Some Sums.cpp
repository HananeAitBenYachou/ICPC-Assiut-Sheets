#include <iostream>
using namespace std;

static short GetSumOfNumberDigits(int number)
{
    short sum = 0;

    while (number > 0)
    {
        sum += (number % 10);

        number /= 10;
    }

    return sum;
}

int main()
{
    long long n;
    short a, b;

    cin >> n >> a >> b;

    long long sum = 0;

    short sumOfNumberDigits = 0;

    for (long long i = 1; i <= n; i++)
    {
        sumOfNumberDigits = GetSumOfNumberDigits(i);

        if (sumOfNumberDigits <= b && sumOfNumberDigits >= a)
            sum += i;
    }

    cout << sum;

    return 0;
}