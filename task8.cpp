#include <iostream>
using namespace std;
int main() {
int price, quantity, total, tax, finalPrice;
cout << "Enter the price of the item: ";
cin >> price;
cout << "Enter the quantity: ";
cin >> quantity;

total = price * quantity;
tax = total * 5/100; // Assuming a 5% tax rate
finalPrice = total + tax;

cout << "Total: " << total << endl;
cout << "Tax: " << tax << endl;
cout << "Final Price: " << finalPrice << endl;

    return 0;
}