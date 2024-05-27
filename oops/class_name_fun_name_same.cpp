// class name and class method or function return type name same....

#include <iostream>
using namespace std;
class Test
{
public:
    int n;
};

class Method
{
public:
    Test Fun(Test p)
    {
        cout << p.n << endl;
    }
};

int main()
{
    Test obj_test;
    Method obj;
    obj.Fun(obj_test);
}