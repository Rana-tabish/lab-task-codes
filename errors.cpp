
#include <iostream>
// the using namespace std;  is missing from here 
using namespace std;
int main()
{
	cout << "Orientation Day" << endl; //semi colon ; is missing from here 
	cout << "Total students: " << 450 << endl;// << is missing
	cout << "Seats left: " << 500 - 450 << endl;
	cout << "Have a nice day" << endl; // string should be closed in ""
	cout << "Average: " << (60 + 70 + 80) / 3 << endl; // logical error found the formula for Average is to total first then divison
	return 0;
}
