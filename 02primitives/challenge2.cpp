// Modify Tea Prices Create a program where the user inputs a base price for tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting.

#include <iostream>
using namespace std;
int main()
{
    int price;
    float newPrice;
    cout << "enter the price of the tea \n";
    cin >> price;
    newPrice = float(price * 1.1);
    cout << "New price of the tea : " << newPrice;

    return 0;
}