// Write a Cpp program to sum of array elements;

#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;
    cout << "Enter the number of elements store in array: ";
    cin >> n;
    int array[n];
    i = 0;
    cout << "Enter the elements:\n";
    do
    {
        cin >> array[i];
        sum = sum + array[i];
        i++;
    } while (i < n);
    cout << "Sum of the array elements is: " << sum << endl;

    return 0;
}

/*
output:

Enter the number of elements store in array: 7
Enter the elements:
7
6
5
4
3
2
1
Sum of the array elements is: 28
*/