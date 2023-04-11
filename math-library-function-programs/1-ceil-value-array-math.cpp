// Write a Cpp program to find the ceiling value of the array elements.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int size;
    cout << "Input the array size: ";
    cin >> size;
    float array[size];

    cout << "Input the array elements:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Input the element - " << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "\nGiven Array: \n";

    for (int i = 0; i < size; i++)
        cout << array[i] << "  ";

    for (int i = 0; i < size; i++)
        array[i] = ceil(array[i]);

    cout << "\nOutput array elements are:\n";
    for (int i = 0; i < size; i++)
        cout << array[i] << "  ";

    cout << "\n";
    return 0;
}

/*
Sample Output:

Input the array size: 3
Input the array elements:
Input the element - 1: 23.89
Input the element - 2: 76.34
Input the element - 3: 48.29

Given Array: 
23.89  76.34  48.29  
Output array elements are:
24  77  49  
*/