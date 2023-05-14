// Write a Cpp program to print the plus-minus pattern.

#include <iostream>
using namespace std;

int main()
{
    int row, i, j;
    char symbol;
    cout << "Enter the row value: ";
    cin >> row;

    for (i = 1; i <= row; i++)
    {
        symbol = (i % 2 == 0) ? '+' : '-';
        for (j = 1; j <= row; j++)
        {
            if (i == 1 || i == row)
            {
                symbol = '-';
            }
            cout << symbol << " ";
            symbol = (symbol == '+') ? '-' : '+';
        }
        cout << "\n";
    }
    return 0;
}

/*
Sample Output: 1

- - - - - - - - - - -
+ - + - + - + - + - +
- + - + - + - + - + -
+ - + - + - + - + - +
- + - + - + - + - + -
+ - + - + - + - + - +
- + - + - + - + - + -
+ - + - + - + - + - +
- + - + - + - + - + -
+ - + - + - + - + - +
- - - - - - - - - - -

Sample Output: 2

Enter the row value: 8
- - - - - - - -
+ - + - + - + -
- + - + - + - +
+ - + - + - + -
- + - + - + - +
+ - + - + - + -
- + - + - + - +
- - - - - - - -



*/