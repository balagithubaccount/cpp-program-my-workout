// Write a Cpp program to print the elements of an array in reverse order.

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Input array size: ";
    cin >> size;

    int arr[size], *ptr = &arr[size - 1];

    for (int i = 0; i < size; i++)
    {
        cout << "element " <<  i + 1 << ": ";
        cin >> *(i + arr);
    }

    cout << "Array Elements in reverse order: ";

    for (int i = 0; i < size; i++)
    {
        cout << *ptr-- << " " ;
    }

    cout << endl;

    return 0;
}
/*
Sample Output:

Input array size: 5
element 1: 2
element 2: 3
element 3: 4
element 4: 5
element 5: 6
Array Elements in reverse order: 6 5 4 3 2

*/