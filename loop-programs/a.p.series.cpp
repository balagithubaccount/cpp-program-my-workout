/*
Write a Cpp program to find out the sum of an A.P. series

    Input the starting number of the A.P. series: 1
    Input the number of items for the A.P. series: 10
    Input the common difference of A.P. series: 4

    Expected Output :
    The Sum of the A.P. series are :
    1 + 5 + 9 + 13 + 17 + 21 + 25 + 29 + 33 + 37 = 190

*/

#include <iostream>
using namespace std;

int main()
{
    int start, terms, diff, sum = 0, d, count = 1, i;
    cout << "Input the starting number: ";
    cin >> start;
    cout << "Input the number of terms: ";
    cin >> terms;
    cout << "Input the difference: ";
    cin >> diff;
    d = start + diff;
    cout << start << " + ";
    sum = sum + start;

    for (i = 2; i <= terms; i++)
    {
        (i != terms) ? cout << d << " + " : cout << d << " = ";
        sum = sum + d;
        d = d + diff;
    }
    cout << sum << endl;

    return 0;
}

/*
Sample Output:

Input the starting number: 1
Input the number of terms: 10
Input the difference: 4
1 + 5 + 9 + 13 + 17 + 21 + 25 + 29 + 33 + 37 = 190
*/