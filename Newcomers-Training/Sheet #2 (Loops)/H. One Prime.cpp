#include <iostream>
using namespace std;


static bool IsPrime(int number)
{
    if (number == 1)
        return false;

    for (int i = 2; i <= (number / 2); i++)
    {
        if (number % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int number;

    cin >> number;

    IsPrime(number) ? cout << "YES" : cout << "NO";

    return 0;
}