#include <iostream>
using namespace std;

static void PrintNumberDigitsInReverse(long long number)
{
    if (number < 10)
    {
        cout << number << " ";
        return;
    }

    while (number > 0)
    {
        cout << number % 10 << " ";
        number /= 10;
    }
}

int main()
{
    short testCases;
    cin >> testCases;

    long long number;

    for (short i = 0; i < testCases; i++)
    {
        cin >> number;
        PrintNumberDigitsInReverse(number);
        cout << "\n";
    }
    return 0;
}