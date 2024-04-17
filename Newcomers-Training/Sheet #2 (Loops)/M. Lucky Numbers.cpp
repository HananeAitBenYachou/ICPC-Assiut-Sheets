#include <iostream>
#include <string>

using namespace std;


static bool IsLuckyNumber(long number)
{
    short remaining = 0; 

    while (number > 0)
    {
        remaining = number % 10;

        if (remaining != 4 && remaining != 7)
            return false;

        number = number / 10;
    }

    return true;
}

static void PrintLuckyNumbersInRange(long start, long end)
{
    short counter = 0; 

    for (long i = start; i <= end; i++)
    {
        if (IsLuckyNumber(i))
        {
            cout << i << " ";
            counter++;
        }
    }

    if (counter == 0)
        cout << -1;
}

int main()
{
    long A, B;

    cin >> A >> B;

    PrintLuckyNumbersInRange(A, B);

    return 0;
}