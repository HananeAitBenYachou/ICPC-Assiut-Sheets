#include <iostream>
using namespace std;

static void PrintMultiplicationTable(short number)
{
    for (short i = 1; i <= 12; i++)
    {
        cout << number << " * " << i << " = " << (number * i) << "\n";
    }

}

int main() {

    short number ; 
    cin >> number;

    PrintMultiplicationTable(number);

    return 0;
}