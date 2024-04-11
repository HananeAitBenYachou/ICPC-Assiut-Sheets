#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    short discountPercentage;
    double priceAfterDiscount;

    cin >> discountPercentage >> priceAfterDiscount;

    double originalPrice = priceAfterDiscount / (1 - (discountPercentage / static_cast<float>(100)));

    cout << fixed  << setprecision(2) << originalPrice;

    return 0;
}