// Write a Cpp program to find the Sum of GP series.

#include <iostream>
using namespace std;

int main()
{
    float num, start, terms, ratio, sum = 0, count = 1, prod;
    cout << "Input the first number of the G.P.: ";
    cin >> start;
    cout << "Input the terms: ";
    cin >> terms;
    cout << "Input the ratio: ";
    cin >> ratio;
    cout << start << " ";
    sum = sum + start;
    prod = start * ratio;

    for (num = 1; num > 0; num++)
    {
        cout << prod << " ";
        sum = sum + prod;
        prod = prod * ratio;
        count++;
        if (count == terms)
            break;
    }

    cout << "\nThe sum of the G.P.series: " << sum << endl;
    return 0;
}

/*
Sample Output:

Input the first number of the G.P.: 1
Input the terms: 4
Input the ratio: 3
1 3 9 27
The sum of the G.P.series: 40

*/
