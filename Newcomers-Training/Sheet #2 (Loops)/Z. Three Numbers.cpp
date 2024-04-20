#include <iostream>
using namespace std;

int main()
{	
	int k, s , z , counter = 0;
	cin >> k >> s; 

	for (short i = 0; i <= k; i++)
	{
		for (short j = 0; j <= k; j++)
		{
			z = s - i - j;

			if (z >= 0 && z <= k)		
				counter++;
		}
	}

	cout << counter;
	return 0;
}