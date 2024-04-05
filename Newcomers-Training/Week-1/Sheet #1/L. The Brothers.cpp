#include <iostream>
#include <string>
using namespace std;

int main()
{

	string name_1, name_2;

	getline(cin, name_1);
	getline(cin, name_2);

	string lastName_1, lastName_2;

	lastName_1 = name_1.substr(name_1.find(' ') + 1);
	lastName_2 = name_2.substr(name_2.find(' ') + 1);

	(lastName_1 == lastName_2) ? cout << "ARE Brothers" : cout << "NOT";

	return 0;
}