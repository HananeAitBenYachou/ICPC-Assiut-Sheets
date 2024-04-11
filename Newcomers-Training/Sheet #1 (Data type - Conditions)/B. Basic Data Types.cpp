#include <iostream>
using namespace std;

int main(int argc, const char* argv[])
{
    int intValue;
    long long longValue;
    char charValue;
    float floatValue;
    double doubleValue;

    cin >> intValue >> longValue >> charValue >> floatValue >> doubleValue;

    cout << intValue << "\n" << longValue << "\n" << charValue << "\n" << floatValue << "\n" << doubleValue;

    return 0;
}