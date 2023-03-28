// Write a Cpp program to compute the sum of all elements in an array using pointers.

#include <iostream>
using namespace std;

int main()
{
    int size, s = 0;
    int *sum = &s;

    cout << "Input array size: ";
    cin >> size ;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Element " <<  i + 1 << ": ";
        cin >> *(arr+i);
        *sum = *sum + *(arr + i);
    }
    cout << "Sum of all elements is: " << s << endl;
    return 0;
}

/*
Sample Output:

Input array size: 7
Element 1: 7
Element 2: 1
Element 3: 6
Element 4: 2
Element 5: 5
Element 6: 3
Element 7: 4
Sum of all elements is: 28

*/