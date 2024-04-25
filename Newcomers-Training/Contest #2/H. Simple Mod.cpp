#include <iostream>
using namespace std;

static pair<long long , long long> findValues(long long N)
{
    for (long long i = 0; i <= 1e9; ++i)
    {
        for (long long y = 0; y <= 1e9; ++y)
        {
            if ((i * i + y * y) % N == 0)            
                return { i, y };          
        }
    }
    return { -1, -1 };
}

int main() 
{
    long long N;
    cin >> N;

    pair<int, int> values = findValues(N);

    if (values.first != -1 && values.second != -1) 
        cout << values.first << " " << values.second << endl;
    
    else    
        cout << "No solutions" << endl;
    
    return 0;
}