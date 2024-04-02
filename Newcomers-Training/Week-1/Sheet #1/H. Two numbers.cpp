#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double num1, num2;

    cin >> num1 >> num2;

    int floorResult = floor(num1 / num2);
    int ceilResult = ceil(num1 / num2);
    int roundResult = round(num1 / num2);

    cout << "floor " << num1 << " / " << num2 << " = " << floorResult << "\n";
    cout << "ceil " << num1 << " / " << num2 << " = " << ceilResult << "\n";
    cout << "round " << num1 << " / " << num2 << " = " << roundResult << "\n";

    return 0;
}