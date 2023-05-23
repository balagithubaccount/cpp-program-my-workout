// Write a Cpp program to find LCM of any two numbers.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, i, j, lcm;
    cout << "Input the 1st number of lcm: ";
    cin >> num1;
    cout << "Input 2nd the number of lcm: ";
    cin >> num2;

    j = (num1 > num2) ? num1 : num2;

    for (i = j; i > 0; i += j)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
    }
    cout << "Lcm of " << num1 << " and " << num2 << " is: " << lcm << endl;
    return 0;
}

/*
Sample Output:

Input the 1st number of lcm: 12
Input 2nd the number of lcm: 10
Lcm of 12 and 10 is: 60

*/