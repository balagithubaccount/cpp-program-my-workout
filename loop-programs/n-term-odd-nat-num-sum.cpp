// Write a Cpp program To display the n terms of odd natural number and their sum.

#include <iostream>
using namespace std;

int main()
{
    int term;
    cout << "Input the terms: ";
    scanf("%d", &term);
    int count = 1, sum = 0;
    for (int i = 1; i <= term * 2; i += 2)
    {
        cout << i << endl;
        sum = sum + i;
    }
    cout << term << " terms of odd natural numbers sum is: " << sum << endl;
    return 0;
}

/*
Sample Output:

Input the terms: 10
1
3
5
7
9
11
13
15
17
19
10 terms of odd natural numbers sum is: 100

*/