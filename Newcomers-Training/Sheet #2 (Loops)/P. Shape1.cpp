#include <iostream>
using namespace std;


int main()
{
    short number;

    cin >> number;

    for (short i = 0; i < number; i++)
    {
        for (short j = number; j > i; j--)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}