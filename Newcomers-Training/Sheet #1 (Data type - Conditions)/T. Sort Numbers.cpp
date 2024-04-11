#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long A, B, C;
    cin >> A >> B >> C;

    long minVal = min({ A, B, C });
    long maxVal = max({ A, B, C });
    long midVal = A + B + C - minVal - maxVal;

    cout << minVal << '\n' << midVal << '\n' << maxVal << '\n' << '\n';
    cout << A << '\n' << B << '\n' << C << '\n';

    return 0;
}