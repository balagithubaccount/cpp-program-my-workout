// Write a Cpp program To display the multiplication table of a given integer.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input a table number: ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " x " << n << " = " << i * n << endl;
    }
    return 0;
}

/*
Sample Output:

Input a table number: 6
1 x 6 = 6
2 x 6 = 12
3 x 6 = 18
4 x 6 = 24
5 x 6 = 30
6 x 6 = 36
7 x 6 = 42
8 x 6 = 48
9 x 6 = 54
10 x 6 = 60

*/