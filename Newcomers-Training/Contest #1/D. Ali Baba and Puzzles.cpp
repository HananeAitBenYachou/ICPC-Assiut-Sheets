#include <iostream>
using namespace std;

static bool IsEquationSolvable(long long A , long long B , long long C , long long D , char firstOperator)
{
    switch (firstOperator)
    {
        case '+':
            if (A + B - C == D || A + B * C == D)
                return true;
            break;

        case '-':
            if (A - B + C == D || A - B * C == D)
                return true;
            break;

        case '*':
            if (A * B + C == D || A * B - C == D)
                return true;
            break;
    }

    return false;
}

int main() 
{ 
    long long A, B, C , D;

    cin >> A >> B >> C >> D;

    if (IsEquationSolvable(A, B, C, D, '+') || IsEquationSolvable(A, B, C, D, '-') || IsEquationSolvable(A, B, C, D, '*'))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}