#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long L1, L2, R1, R2;

    cin >> L1 >> R1 >> L2 >> R2;

    if (R1 < L2 || R2 < L1)
    {
        cout << -1;
        return 0;
    }

    cout << max(L1,L2) << " " << min(R1,R2);

    return 0;
}