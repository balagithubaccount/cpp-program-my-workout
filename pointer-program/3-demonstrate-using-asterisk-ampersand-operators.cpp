// Write a Cpp program to demonstrate the use of &(address of) and *(value at address) operator.

#include <iostream>
using namespace std;

int main()
{
    int m = 45;
    float fx = 34.67527;
    char cht = 'B';

    int *pt1 = &m;
    float *pt2 = &fx;
    char *pt3 = &cht;

    cout << "Using & (reference )operator:\n\n";

    cout << "Address of m is: " << &m << endl;
    cout << "Address of fx is: " << &fx << endl;
    cout << "Address of cht is: " << &cht << endl;

    cout << "\nUsing pointer variables:\n\n";

    cout << "value of pt1 is: " << pt1 << endl;
    cout << "value of pt2 is: " << pt2 << endl;
    cout << "value of pt3 is: " << pt3 << endl;

    cout << "\nUsing & operator:\n\n";

    cout << "Address of pt1 is: " << &pt1 << endl;
    cout << "Address of pt2 is: " << &pt2 << endl;
    cout << "Address of pt3 is: " << &pt3 << endl;

    cout << "\n\nUsing * (dereference) operator: \n\n";

    cout << "value of m is: " << m << endl;
    cout << "value of fx is: " << fx << endl;
    cout << "value of cht is: " << cht << endl;

    cout << "\nvalue of m is: " << *pt1 << endl;
    cout << "value of fx is: " << *pt2 << endl;
    cout << "value of cht is: " << *pt3 << endl;

    return 0;
}
/*
Sample Output:

Using & (reference )operator:

Address of m is: 0x7fffe4b19d18
Address of fx is: 0x7fffe4b19d1c
Address of cht is: B-

Using pointer variables:

value of pt1 is: 0x7fffe4b19d18
value of pt2 is: 0x7fffe4b19d1c
value of pt3 is: B-

Using & operator:

Address of pt1 is: 0x7fffe4b19d20
Address of pt2 is: 0x7fffe4b19d28
Address of pt3 is: 0x7fffe4b19d30


Using * (dereference) operator: 

value of m is: 45
value of fx is: 34.6753
value of cht is: B

value of m is: 45
value of fx is: 34.6753
value of cht is: B

*/
