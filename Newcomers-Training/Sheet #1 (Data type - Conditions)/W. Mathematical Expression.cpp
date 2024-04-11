#include <iostream>
using namespace std;

int main()
{
    short num1, num2;
    long result;
    char operationType, equalitySign;

    cin >> num1 >> operationType >> num2 >> equalitySign >> result;

    switch (operationType)
    {
    case '+':
        (num1 + num2 == result) ? cout << "Yes" : cout << (num1 + num2);
        break;

    case '-':
        (num1 - num2 == result) ? cout << "Yes" : cout << (num1 - num2);
        break;

    case '*':
        (num1 * num2 == result) ? cout << "Yes" : cout << (num1 * num2);
        break;
    }

    return 0;
}