#include <iostream>
using namespace std;
int main() {
    float temperature;

    cout << "Enter the temperature in Celsius: ";
    cin >> temperature;
    cout << "The temperature in Fahrenheit is: " << (temperature * 9/5) + 32 << endl;
    cout << "Celsius 0\t gives Fahrenheit 32" << endl;
    cout << "Celsius 37\t gives Fahrenheit 98.6" << endl;
    return 0;
}
/*
Test with 0, 100 and 37. A calculator gives 98.6 for 37. What does your program print, and why?
Answer 
When we test the program with the input values 0, 100, and 37, the output will be as follows: 
*/