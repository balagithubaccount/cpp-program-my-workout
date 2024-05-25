//This program in example for Encapsulation.

#include <iostream>
using namespace std;

class Encapsulation
{
    private:

    int num;

    public:
    void set(int a)
    {
        num = a;
    }
    int get()
    {
        return num;
    }
};
int main()
{
    Encapsulation obj;
    int a;
    cout << "Input a number: ";
    cin >> a;
    obj.set(a);
    cout << "num = " << obj.get() << endl;
}

/*
Output:

Input a number: 2023
num = 2023
*/
