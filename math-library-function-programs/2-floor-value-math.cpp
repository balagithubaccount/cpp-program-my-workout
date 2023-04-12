// Write a Cpp program to find the floor value of the array elements.

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
        array[i] = floor(array[i]);

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
Input the element - 1: 2
Input the element - 2: 2.7
Input the element - 3: 4.3

Given Array: 
2  2.7  4.3  
Output array elements are:
2  2  4  
*/