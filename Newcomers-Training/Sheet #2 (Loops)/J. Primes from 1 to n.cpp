#include <iostream>
using namespace std;


static bool IsPrime(short number)
{
    if (number == 1)
        return false;

    for (short i = 2; i <= (number / 2); i++)
    {
        if (number % i == 0)
            return false;
    }

    return true;
}


static void PrintPrimeNumbersFrom1ToN(short n)
{
    for (short i = 2; i <= n; i++)
    {
        if (IsPrime(i))
            cout << i << " ";
    }

}


int main()
{
    short number;

    cin >> number;

    PrintPrimeNumbersFrom1ToN(number);

    return 0;
}