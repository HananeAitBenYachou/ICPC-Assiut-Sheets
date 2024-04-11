#include <iostream>
#include <string>
using namespace std;

int main()
{
	char character;
	cin >> character;

	int asciiCode = (int)character;

	(asciiCode >= 65 && asciiCode <= 90) ? cout << char(asciiCode + 32) : cout << char(asciiCode - 32);

	return 0;
}