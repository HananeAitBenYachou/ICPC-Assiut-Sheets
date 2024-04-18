#include <iostream>
using namespace std;

int main()
{
    short n; 
    cin >> n;

    short counter = 0;

    while (n > 0)
    {
        counter++; 

        for (short i = 0; i < 3; i++)
        {
            cout << counter++ << " ";
        }

        cout << "PUM" << "\n";

        n--;
    }
    return 0;
}