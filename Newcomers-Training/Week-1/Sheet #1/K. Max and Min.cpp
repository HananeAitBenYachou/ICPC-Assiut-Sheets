#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{

	long num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	cout << min(num1, min(num2, num3)) << " ";

	cout << max(num1, max(num2, num3));

	
	return 0;
}