#include <iostream>
using namespace std;

int main() {

	long num1, num2;

	cin >> num1 >> num2;

	bool areMultiples = (num1 % num2 == 0) | (num2 % num1 == 0);

	areMultiples ? cout << "Multiples" : cout << "No Multiples";

	return 0;
}