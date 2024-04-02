#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    long long number1 = 0 , number2 = 0;

    short num1LastDigit, num2LastDigit;

    cin >> number1 >> number2;

    num1LastDigit = number1 % 10;
    num2LastDigit = number2 % 10;

    cout << (num1LastDigit + num2LastDigit);

    return 0;
}