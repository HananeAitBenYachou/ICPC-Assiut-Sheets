#include <iostream>
using namespace std;

int main()
{
    short n;
    cin >> n;

    for (short i = 0; i < n ; i++)
    {
        for (short j = 0 ; j < (n - i - 1) ; j++)
        {
            cout << " ";
        }

        for (short k = 0; k < (2 * i + 1) ; k++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}