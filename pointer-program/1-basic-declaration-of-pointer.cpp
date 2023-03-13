// Write a Cpp program to show the basic declaration of a pointer.


#include <iostream>
using namespace std;
int main()
{
    int m, n, o;
    int *z;

    m = 10;
    z = &m;

    cout << "z stores the address of m: " << z << endl;
    cout << "\n*z stores the value of m: " << *z << endl;
    cout << "\n&m is the address of m: " << &m << endl;
    cout << "\n&n stores the address of n: " <<  &n << endl;
    cout << "\n&o  stores the address of o: " << &o << endl;
    cout << "\n&z stores the address of z: " << &z << endl;
}

/*
Sample Output:

z stores the address of m: 0x7ffc17a0c884

*z stores the value of m: 10

&m is the address of m: 0x7ffc17a0c884

&n stores the address of n: 0x7ffc17a0c888

&o  stores the address of o: 0x7ffc17a0c88c

&z stores the address of z: 0x7ffc17a0c890

*/