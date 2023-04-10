// Write a Cpp program to calculate the power without using the library function - Pointer.

#include <iostream>
using namespace std;

int powr(int b, int p)
{
    int result = 1;
    for(int i = 1; i <= p; i++)
    {
        result = result * b;   
    }
    return result;
}
int main()
{
    int base_value, pow_value;
    cout << "Input the base value: ";
    cin >> base_value;

    cout << "Input the power value: ";
    cin >> pow_value;
    cout << endl;
    cout << base_value << "^" << pow_value << " = " << powr(base_value, pow_value) ;
    cout << endl;

    return 0;
}

/*
Sample Output:

Input the base value: 5
Input the power value: 2

5^2 = 25

*/