#include <iostream>
using namespace std;

static void PrintNumberDivisors(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
            cout << i << "\n";
    }
}

int main()
{
    int number;

    cin >> number;

    PrintNumberDivisors(number);

    return 0;
}