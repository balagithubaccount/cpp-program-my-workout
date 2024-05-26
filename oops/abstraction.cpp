// Example for Abstraction

#include <iostream>
using namespace std;

class Abstraction
{
    private:

    int a,b;

    public:

    void get (int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void display ()
    {
        cout << "a = " << a;
        cout << "\nb = " << b;
    }
}obj;
int main()
{
    obj.get(21,20);
    obj.display();
    cout << endl;
}

/*
Output:

a = 21
b = 20
*/