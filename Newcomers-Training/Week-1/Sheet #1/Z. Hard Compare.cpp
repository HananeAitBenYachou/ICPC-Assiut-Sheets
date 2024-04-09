#include <iostream>
#include <cmath>
using namespace std;

int main() 
{

    long A, C;
    long long B, D;

    cin >> A >> B >> C >> D;

    ( (B * log(A)) > (D * log(C)) ) ? cout << "YES" : cout << "NO";

    return 0;
}