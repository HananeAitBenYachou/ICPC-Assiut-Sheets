#include <iostream>
using namespace std;

int main() 
{ 
    char letter;

    cin >> letter;

    (letter == 'z') ? cout << 'a' : cout << char(letter + 1);
   
    return 0;
}