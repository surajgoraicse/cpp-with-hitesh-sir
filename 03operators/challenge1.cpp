/*
 Challenge: Create a program that calculate the total price of tea cups. The user inputs the number of cups they
want and the price per cup. The program should calculate the total price and apply a 5% discount if the total is above
a 100, and show the final price.
*/
#include<iostream>
using namespace std;
int main(){
    int cupsCount ;
    float totalPrice , price;
    cout << "enter total number of cups \n";
    cin >> cupsCount;
    cout << "enter the price of each cup\n";
    cin >> price;
    totalPrice = cupsCount * price;
    if(totalPrice > 100){
        cout << "Total price  = " << totalPrice * 0.95 << endl;
    }    
    else{
        cout << "Total price  = " << totalPrice  << endl;

    }
}