#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float num;

    cin >> num;

    float decimalPart = num - (int)num;

    (decimalPart == 0) ? cout << "int " << (int)num : cout << "float " << (int)num << " " << setprecision(3) << decimalPart;

    return 0;
}