// Write a Cpp program to one array to another array copy elements.

#include <iostream>
using namespace std;

int main()
{
    int n, i;

    cout << "Enter the total number of elements store in array: ";
    cin >> n;

    int array1[n], copy_arr[n];

    cout << "Enter the values:\n";
    for (i = 0; i < n; i++)
    {
        cin >> array1[i];
        copy_arr[i] = array1[i];
    }

    cout << "You entered array is:\n";
    for (i = 0; i < n; i++)
        cout << array1[i] << " ";

    cout << "\nCopied array is:\n";
    for (i = 0; i < n; i++)
        cout << copy_arr[i] << " ";

    cout << "\n";
    return 0;
}
/*
output:

Enter the total number of elements store in array: 7
Enter the values:
1 2 3 4 5 6 7
You entered array is:
1 2 3 4 5 6 7
Copied array is:
1 2 3 4 5 6 7
*/
