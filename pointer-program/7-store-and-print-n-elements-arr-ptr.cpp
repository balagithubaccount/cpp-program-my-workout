// Write a Cpp program to store n elements in an array and print the elements using pointer.

#include <iostream>
using namespace std;

void print_arr(int *ptr, int size)
{
    cout << "Given array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << *ptr << "  ";
        ptr++;
    }
}

int main()
{
    int n;

    cout << "Input size of an array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cout << "Element "<< i+1 << ":";
        cin >> arr[i];
    }

    print_arr(arr, n);
    cout << endl;

    return 0;
}

/*
Sample Output:

Input size of an array: 5
Element 1:21
Element 2:1
Element 3:31
Element 4:9
Element 5:67
Given array is: 21  1  31  9  67 

*/
