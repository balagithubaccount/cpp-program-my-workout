// Write a Cpp program To display the pattern like right angle triangle triangle with a number.

/*
The pattern like:

input is 5

1
12
123
1234
12345

*/

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Input the number of rows: ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}

/*
Sample Output:

Input the number of rows: 6
1
12
123
1234
12345
123456

*/