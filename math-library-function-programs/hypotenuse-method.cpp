// This function requires two sides of the right-angled triangle to give output as its hypotenuse.

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	double x = 9, y = 10, res;
	res = hypot(x, y);

	// hypot() returns double in this case
	cout << res << endl;
	long double a, b, result;
	a = 4.525252;
	b = 5.767676;

	// hypot() returns long double in this case
	result = hypot(a, b);
	cout << result;
	return 0;
}

/*
Sample Output:

13.4536
7.33103
*/