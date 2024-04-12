#include <iostream>
using namespace std;

int main() 
{ 
   
    short a, b;

    cin >> a >> b;

    ( (a == 0 && b == 0) or abs(a - b) > 1 ) ? cout << "NO" : cout << "YES";

    return 0;
}