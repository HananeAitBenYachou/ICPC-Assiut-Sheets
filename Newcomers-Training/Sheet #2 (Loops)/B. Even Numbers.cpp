#include <iostream>
using namespace std;

int main() 
{
    short n , evenNumbersCounter = 0;
    cin >> n; 

    for (short i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            evenNumbersCounter++;
            cout << i << "\n";
        }
    }

    if (evenNumbersCounter == 0)
        cout << "-1";

    return 0;

}