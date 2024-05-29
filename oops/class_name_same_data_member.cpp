// class name and class data member type is also same...

#include <iostream>
using namespace std;

class Same
{
public:
    int a;
    Same *b;
};

int main()
{
    Same obj1, obj2;
    obj1.a = 10;
    obj2.b = &obj1;

    cout << obj1.a << endl << &obj1 << endl;
    cout << obj2.b << endl << obj2.b->a << endl;
}

/*
Sample Output:

10
0x7ffe20e66370
0x7ffe20e66370
10

*/