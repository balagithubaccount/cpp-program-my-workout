// Write a Cpp program to find LCM of any two numbers using HCF

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, hcf, i, j, lcm;

    cout << "Input the 1st number of LCM: ";
    cin >> num1;

    cout << "Input the 2nd number of LCM: ";
    cin >> num2;

    j = (num1 < num2) ? num1 : num2;
    for (i = 1; i <= j; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    lcm = (num1 * num2) / hcf;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;
    return 0;
}

/*
Sample Output:

Input the 1st number of LCM: 10
Input the 2nd number of LCM: 12
LCM of 10 and 12 is: 60

*/
