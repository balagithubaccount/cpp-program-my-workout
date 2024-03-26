// This function returns the absolute value of any number.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a = -1.01, answer;

	answer = fabs(a);
	cout << "fabs of " << a << " is " << answer << endl;

	return 0;
}

/*
Sample Output:

fabs of -10 is 10
*/