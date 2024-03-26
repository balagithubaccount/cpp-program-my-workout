// This function takes an integer number as an argument and returns its absolute value. It means the output will always be positive regardless of the sign of the input.

#include <iostream>
using namespace std;

int main()
{
	int val1, val2;

	/// finding absolute value using
	/// abs() function.
	val1 = abs(22);
	val2 = abs(-43);

	cout << "abs(22) = " << val1 << "\n";
	cout << "abs(-43) = " << val2 << "\n";
	return 0;
}

/*
Sample Output:

abs(22) = 22
abs(-43) = 43
*/
