#include <iostream>
using namespace std;

static void PrintSymbol(short number , char symbol)
{
    for (short i = 1; i <= number ; i++)
    {
        cout << symbol;
    }
}

int main()
{
    char symbol;    
    cin >> symbol;

    short n;
    cin >> n;

    short number;

    for (short i = 1; i <= n; i++)
    {
        cin >> number;
        PrintSymbol(number, symbol);
        cout << "\n";
    }

    return 0;
}