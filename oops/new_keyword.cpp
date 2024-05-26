// memory allocate

#include <iostream>
using namespace std;

class Memory
{
public:
    int a;
    float b;
    char c;
    double n;
};
int main()
{
    Memory p;
    cout << "Size of int: " << sizeof(p.a) << " bytes" << endl;
    cout << "Size of float: " << sizeof(p.b) << " bytes" << endl;
    cout << "Size of char: " << sizeof(p.c) << " bytes" << endl;
    cout << "Size of double: " << sizeof(p.n) << " bytes" << endl;
    cout << "Size of Memory object: " << sizeof(p) << " bytes" << endl;

    return 0;
}

/*
Sample Output:

Size of int: 4 bytes
Size of float: 4 bytes
Size of char: 1 bytes
Size of double: 8 bytes
Size of Memory object: 24 bytes
*/