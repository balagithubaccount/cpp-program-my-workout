// Write a Cpp program to find the square root of a given value.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double value, result;
    cout << "Input the value for to find square root: ";
    cin >> value;
    result = sqrt(value);
    cout << "The Square root of " << value << " is " << result << endl;
    return 0;
}

/*
Sample Output:

Input the value for to find square root: 81.654
The Square root of 81.654 is 9.03626

Sample Output:

Input the value for to find square root: 64.7861
The Square root of 64.7861 is 8.04898

*/