// Write a C program to sort an array using Pointer.

#include <iostream>
using namespace std;

int main()
{
    int size, temp, i, j;
    cout << "Input size of array: ";
    cin >> size ;

    int arr[size];

    for ( i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": " ;
        cin >> *(arr+i);
    }
    for ( i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    cout << "After sorted array is: ";
    for (int i = 0; i < size; i++)
    {
         cout << *(arr + i) << " ";
    }
    cout << endl;
    return 0;
}

/*
Sample Output:

Input size of array: 5
Element 1: 5
Element 2: 1
Element 3: 4
Element 4: 2
Element 5: 8
After sorted array is: 1 2 4 5 8 

*/
