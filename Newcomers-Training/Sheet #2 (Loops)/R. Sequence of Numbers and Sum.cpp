#include <iostream>
using namespace std;

static void PrintNumbersInRange(short N , short M)
{
    short sum = 0;

    for (short i = min(N, M); i <= max(N, M); i++)
    {
        sum += i;
        cout << i << " ";
    }
    
    cout << "sum =" << sum; 
}

int main()
{
    short N , M;

    while (true)
    {
        cin >> N >> M;

        if(!(N > 0 && M > 0))
            break; 

        PrintNumbersInRange(N, M);

        cout << "\n";       
    }

    return 0;
}