// Write a Cpp program to sum of n elements of an 2D array using pointer.

#include <iostream>
using namespace std;

const int size = 4;
int sum;
int get_and_sum(int (*arr)[size])
{
    cout << "Input the " << size * size << " elements: \n";

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> *(*(arr + i) + j);
            sum = sum + *(*(arr + i) + j);
        }
    }

    cout << "Given array elements are:\n";
    for (int *ptr = &arr[0][0]; ptr <= &arr[size - 1][size - 1]; ptr++)
    {
        cout << *ptr << "\t";
    }
    return sum;
}
int main()
{

    int arr[size][size];

    int sum = get_and_sum(arr);
    cout << "\nSum of the 2D array elements are: " << sum << endl;
}
/*
Sample Output:

Input the 16 elements:
16 15 14 13
12 11 10  9
8  7  6   5
4  3  2   1
Given array elements are:
16      15      14      13      12      11      10      9       8       7       6       5       4       3       2       1
Sum of the 2D array elements are: 136

*/