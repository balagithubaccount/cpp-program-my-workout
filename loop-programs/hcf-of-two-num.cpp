// Write a Cpp program to find HCF (Highest Common Factor) of two numbers.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, hcf, i, j;
    cout << "Input the 1st number of HCF: ";
    cin >> num1;
    cout << "Input the 2nd number of HCF: ";
    cin >> num2;

    j = (num1 < num2) ? num1 : num2;
    for (i = 1; i <= j; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    cout << "HCF of " << num1 << " and " << num2 << " is: " << hcf << endl;
    return 0;
}

/*
Sample Output:

Input the 1st number of HCF: 12
Input the 2nd number of HCF: 21
HCF of 12 and 21 is: 3

*/