#include <iostream>
using namespace std;


static long long GetNumberFactorial(short number)
{
    if (number == 0)
        return 1;

    long long factorial = 1;

    for (short i = 1; i <= number; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main() {

    short numberOfTestCases; 
    cin >> numberOfTestCases;

    short number = 0; 

    for (int i = 1; i <= numberOfTestCases; i++)
    {
        cin >> number;
     
        cout << GetNumberFactorial(number) << "\n";
    }

    return 0;
}