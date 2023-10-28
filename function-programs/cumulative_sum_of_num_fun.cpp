// Write a program to find Cumulative sum of numbers in array using function.

#include <iostream>
using namespace std;

void output(int i);
int result_arr[50];
void cumulative(int arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        result_arr[i] = sum;
    }
    output(i);
}
void output(int n)
{
    cout << "Cumulative array is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << result_arr[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int size;

    cout << "Enter the array size: ";
    cin >> size;
    int arr[size];

    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> i[arr]; //  arr[i]  is equal to i[arr]
    }
    cumulative(arr, size);
    return 0;
}

/*
Sample Output:

Enter the array size: 12
Enter the elements: 1 3 5 7 9 8 6 4 2 11 10 12
Cumulative array is:
1 4 9 16 25 33 39 43 45 56 66 78

Sample Output:

Enter the array size: 6
Enter the elements: 1 2 3 4 5 6
Cumulative array is:
1 3 6 10 15 21

*/