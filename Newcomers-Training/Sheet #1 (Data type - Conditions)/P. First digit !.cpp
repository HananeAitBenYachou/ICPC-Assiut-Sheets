#include <iostream>
using namespace std;

int main()
{
	short num;
	cin >> num;

	((num / 1000) % 2 == 0) ? cout << "EVEN" : cout << "ODD";

	return 0;
}