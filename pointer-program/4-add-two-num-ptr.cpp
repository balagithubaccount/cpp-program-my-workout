// Write a Cpp program to add two numbers using pointers.

#include <iostream>
using namespace std;

int main()
{
    float fno, sno;
    float *ptr, *qtr;
    
    ptr = &fno, qtr = &sno;

    cout << "Input value for fno: " ;
    cin >> fno;

    cout << "Input value for sno: ";
    cin >> sno;

    cout << "\nSum is: " << (*ptr + *qtr) << endl;
    return 0;
}

/*
Sample Output:

Input value for fno: 11.2345
Input value for sno: 1.234

Sum is: 12.4685

*/