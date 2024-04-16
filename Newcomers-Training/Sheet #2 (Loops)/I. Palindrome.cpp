#include <iostream>
using namespace std;


static long GetReversedNumber(long number)
{
    short remaining = 0;
    long reveredNumber = 0;

    while (number > 0)
    {
        remaining = (number % 10);

        reveredNumber = reveredNumber * 10 + remaining;

        number /= 10;
    }

    return reveredNumber;
}

static bool IsPalindrome(long number , long reversedNumber)
{
    if (number < 10)
        return true;

    return reversedNumber == number;
}

int main()
{
    long number;
    cin >> number;

    long reversedNumber = GetReversedNumber(number);

    cout << reversedNumber << "\n";

    IsPalindrome(number, reversedNumber) ? cout << "YES" : cout << "NO"; 

    return 0;
}