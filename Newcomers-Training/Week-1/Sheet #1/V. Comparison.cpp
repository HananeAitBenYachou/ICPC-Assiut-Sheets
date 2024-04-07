#include <iostream>
using namespace std;

int main()
{
    short num1, num2;
    char opr;

    cin >> num1 >> opr >> num2;

    switch (opr)
    {
    case '>':
        (num1 > num2) ? cout << "Right" : cout << "Wrong";
        break;

    case '<':
        (num1 < num2) ? cout << "Right" : cout << "Wrong";
        break;

    case '=':
        (num1 == num2) ? cout << "Right" : cout << "Wrong";
        break;
    }

    return 0;
}