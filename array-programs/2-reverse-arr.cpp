// Write a Cpp program to store array and print reverse without string.

#include <iostream>
using namespace std;

int main()
{
    int n, i, t;
    cout << "Enter the number of elements store in array: ";
    cin >> n;
    int array[n], j = n - 1;
    cout << "Enter the " << n << " values:\n";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (i = 0; i < n / 2; i++)
    {
        t = array[i];
        array[i] = array[j];
        array[j] = t;
        j--;
    }
    i = 0;
    while (i < n)
    {
        cout << array[i] << " ";
        i++;
    }
    cout << "\n";
    return 0;
}
/*
Output:

Enter the number of elements store in array: 9
Enter the 9 values:
1 2 3 4 5 6 7 8 9
9 8 7 6 5 4 3 2 1

*/