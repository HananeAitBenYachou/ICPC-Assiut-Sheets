#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4;

    cin >> num1 >> num2 >> num3 >> num4;

    num1 %= 100, num2 %= 100 , num3 %= 100 , num4 %= 100;

    short lastTwoDigits = (num1 * num2 * num3 * num4) % 100;

    lastTwoDigits < 10 ? cout << "0" << lastTwoDigits : cout << lastTwoDigits;

    return 0;
}