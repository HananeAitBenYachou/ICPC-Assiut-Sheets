#include <iostream>
using namespace std;

static short FindGreatestCommonDivisor(short A, short B)
{
    short greatestCommonDivisor = 1;

    for (short i = 1; i <= min(A, B); i++)
    {
        if (A % i == 0 && B % i == 0)
            greatestCommonDivisor = i;
    }

    return greatestCommonDivisor;
}

int main()
{
    short A, B;

    cin >> A >> B;

    cout << FindGreatestCommonDivisor(A, B);

    return 0;
}