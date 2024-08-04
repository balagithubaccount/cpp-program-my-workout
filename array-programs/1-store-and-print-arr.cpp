// Write a Cpp program to get array elements store and print

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter the array size: ";
    cin >> n;

    int array[n];

    cout << "Enter the " << n << " values: ";
    for (i = 0; i < n; i++)
        cin >> array[i];

    cout << "You Entered array is: ";

    for (i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << "\n";

    return 0;
}

/*
Sample Output:

Enter the array size: 5
Enter the 5 values: 5 4 3 1 2
You Entered array is: 5 4 3 1 2

*/