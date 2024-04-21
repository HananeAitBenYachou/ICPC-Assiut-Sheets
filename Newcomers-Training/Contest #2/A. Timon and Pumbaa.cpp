#include <iostream>
using namespace std;

int main()
{	
	long a, b;
	cin >> a >> b;

	long result = (a - b);

	(result >= 0) ? cout << result : cout << 0;
	
	return 0;
}