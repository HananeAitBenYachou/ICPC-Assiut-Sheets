#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    double number = 0;
    const double PI = 3.141592653;

    cin >> number;
    cout << fixed << setprecision(9) << (number * number) * PI;

    return 0;
}