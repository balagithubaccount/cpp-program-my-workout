// Write a Cpp program to print prime numbers in between the given range.

#include <iostream>
using namespace std;

int main()
{
    int i, j, count, start, end;

    int *I, *J, *ptr;
    I = &i, J = &j, ptr = &count;

    cout << "Input the starting and ending range of the value: \n";
    cin >> start >> end;
    cout << "prime numbers between " << start << " to " << end << ": ";

    for (*I = start; *I <= end; (*I)++)
    {
        *ptr = 0;
        for (*J = 1; *J <= *I; (*J)++)
        {
            if (*I % *J == 0)
            {
                (*ptr)++;
            }
        }
        if (*ptr == 2)
        {
            printf("%d ", *I);
        }
    }
    cout << endl;

    return 0;
}

/*
Sample Output:

Input the starting and ending range of the value:
50
100
prime numbers between 50 to 100: 53 59 61 67 71 73 79 83 89 97

*/