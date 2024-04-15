#include <iostream>
using namespace std;

int main()
{
	short const correctPassword = 1999;

	bool isPasswordFound = false;

	long typedPassword;


	while (true)
	{
		cin >> typedPassword;

		if (typedPassword != correctPassword)
			cout << "Wrong" << "\n";
		else
		{
			cout << "Correct" << "\n";
			break;
		}
	}

	return 0;

}