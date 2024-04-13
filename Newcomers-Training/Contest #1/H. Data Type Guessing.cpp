#include <iostream>
using namespace std;

int main() 
{
    int n, k, a;
    cin >> n >> k >> a;

    long double result = (static_cast<long double>(n) * k) / a;

    if (result - (long long ) result > 0)    
         cout << "double";
   
    else if (result >= INT_MIN && result <= INT_MAX)    
        cout << "int";
    
    else     
        cout << "long long";
    
    return 0;
}