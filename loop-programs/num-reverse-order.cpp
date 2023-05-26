// Write a Cpp program to display the number in reverse order.

#include <iostream>
using namespace std;

int main()
{
    int num, x, r;
    cout << "Input the number: ";
    cin >> num;
    cout << "The number in reverse order is: ";

    for (x = num; num != 0; num = num / 10)
    {
        r = num % 10;
        cout << r;
    }
    cout << endl;
}
/*
Sample Output:

Input the number: 123456
The number in reverse order is: 654321

*/