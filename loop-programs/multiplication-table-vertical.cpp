// Write a Cpp program to display the Multiplication table vertically.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, n;
    cout << "Input the multiplication table start from 1-";
    cin >> b;
    cout << "multiplication table from 1-";
    cin >> n;

    for (a = 1; a <= b; a++)
    {
        for (c = 1; c <= n; c++)
        {
            cout << c << " X " << a << " = " << c * a << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Output:

Input the multiplication table start from 1-10
multiplication table from 1-4
1 X 1 = 1 2 X 1 = 2 3 X 1 = 3 4 X 1 = 4
1 X 2 = 2 2 X 2 = 4 3 X 2 = 6 4 X 2 = 8
1 X 3 = 3 2 X 3 = 6 3 X 3 = 9 4 X 3 = 12
1 X 4 = 4 2 X 4 = 8 3 X 4 = 12 4 X 4 = 16
1 X 5 = 5 2 X 5 = 10 3 X 5 = 15 4 X 5 = 20
1 X 6 = 6 2 X 6 = 12 3 X 6 = 18 4 X 6 = 24
1 X 7 = 7 2 X 7 = 14 3 X 7 = 21 4 X 7 = 28
1 X 8 = 8 2 X 8 = 16 3 X 8 = 24 4 X 8 = 32
1 X 9 = 9 2 X 9 = 18 3 X 9 = 27 4 X 9 = 36
1 X 10 = 10 2 X 10 = 20 3 X 10 = 30 4 X 10 = 40
*/
