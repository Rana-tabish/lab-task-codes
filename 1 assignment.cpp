#include <iostream>
using namespace std;

int main() {
    int  age, creditHours ,feePerCreditHour;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your credit hours: ";
    cin >> creditHours;
    cout << "Enter your fee per credit hour: ";
    cin >> feePerCreditHour;
    cout<< "Your total fee is: " << creditHours * feePerCreditHour << endl;
    cout << "Fee after 2000 discount is: " << (creditHours * feePerCreditHour) - 2000 << endl;
    cout << "Your Birth Year is: " << 2026 - age << endl;
    cout << "You will turn 25 in the year: " << 2026 - age + 25 << endl;
    cout << "Hello, World!" << endl;
    return 0;
} /* Runthe program and type all three values on one line separated by spaces (19 15 8000). Then
type each value on a separate line, and then separated by tabs. Is the result different? Why?
awnser

When you run the program and input the values "19 15 8000" on one line separated by spaces,
 the program will read the values correctly and calculate the total fee, fee after discount,
  birth year, and the year you will turn 25 based on those inputs.
  When you input each value on a separate line, the program will still read the values correctly,
 as it uses `cin` to read the inputs. The result will be the same because `cin` can handle
  inputs separated by spaces, newlines, or tabs. 

When you input the values separated by tabs, the program will also read them correctly,
 as `cin` treats whitespace (spaces, newlines, and tabs) as delimiters.
*/

/* Type the age as 19.8. What is stored in age, and what happens to the next value? Explain why?
answer

When you input the age as "19.8", the program will attempt to read it into an integer variable `age`.

*/