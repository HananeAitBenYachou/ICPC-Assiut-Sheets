#include <iostream>
#include <string>
using namespace std;

int main()
{
	char character;
	cin >> character;

	short asciiCode = (int)character;

	(asciiCode >= 48 && asciiCode <= 57) ? cout << "IS DIGIT" : ((asciiCode >= 65 && asciiCode <= 90 ? cout << "ALPHA\nIS CAPITAL" : cout << "ALPHA\nIS SMALL"));

	return 0;
}