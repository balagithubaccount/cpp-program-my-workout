//    Write a Cpp program to demonstrate how to handle the pointers in the program.

#include <iostream>
using namespace std;

int main()
{
    int m = 20;
    int *ab = &m;

    cout << "value of m is: " << m << endl;
    cout << "address of m is: " << &m << endl;
    cout << "value of ab is: " << ab << endl;
    cout << "address of ab is: " << &ab << endl;
    cout << "dereference of ab is: " << *ab << endl
         << endl;

    m = 45;
    cout << "after change m value is: " << m << endl;
    cout << "Now, dereference value of ab is: " << *ab << endl
         << endl;

    *ab = 3;
    cout << "Now, the value of m is: " << m << endl;

    return 0;
}

/*
Sample Output:

value of m is: 20
address of m is: 0x7ffcbc36603c
value of ab is: 0x7ffcbc36603c
address of ab is: 0x7ffcbc366040
dereference of ab is: 20

after change m value is: 45
Now, dereference value of ab is: 45

Now, the value of m is: 3

*/