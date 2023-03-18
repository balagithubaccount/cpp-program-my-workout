// Write a program in Cpp to find the maximum number between two numbers using a pointer. 

#include <iostream>
using namespace std;

int main()
{
    int fno, sno;
    int *ptr, *qtr;

    ptr = &fno, qtr = &sno;
    cout << "Enter the value for fno: ";
    cin >> *ptr;

    cout << "Enter the value for sno: ";
    cin >> *qtr;
    cout << endl;
    
    (*ptr > *qtr) ?  cout <<  *ptr << " is the maximum number\n." : cout << *qtr << " is the maximum number.\n",*qtr;

    return 0;
}

/*
Sample Output:

Enter the value for fno: 6
Enter the value for sno: 5

6 is the maximum number.
*/