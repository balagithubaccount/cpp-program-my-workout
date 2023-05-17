// Write a Cpp program to find the number and sum of all integer between 100 and 200 which are divisible by 9.

#include <iostream>
using namespace std;

int main()
{
    int i, sum = 0;
    cout << "Numbers between 200-300, divisible by 9: ";
    for (i = 100; i <= 200; i++)
    {
        if (i % 9 == 0)
        {
            cout << i << endl;
            sum = sum + i;
        }
    }
    cout << "\nThe sum: " << sum << ".\n";
}
/*
Sample Output:

117
126
135
144
153
162
171
180
189
198

The sum: 1683.

*/