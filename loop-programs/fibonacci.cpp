// Write a Cpp program to display the first n terms of Fibonacci series.

#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c, i, terms;
    cout << "Input the terms: ";
    cin >> terms;
    cout << "Here is the Fibonacci series upto " << terms << " terms: " << endl;
    cout << a << " " << b << " ";
    c = a + b;
    for (i = 1; i <= terms - 2; i++)
    {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
    cout << endl;
    return 0;
}

/*
Output:

Input the terms: 8
Here is the Fibonacci series upto 8 terms:
0 1 1 2 3 5 8 13

*/