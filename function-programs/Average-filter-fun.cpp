// Write a Cpp program to find Average Filter for given square matrix.

#include <iostream>
using namespace std;

int arr[10][10];
float newarr[10][10];
int row, col;

void input_arr()
{
    cout << "Enter the " << row * col << " values: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << i << ", " << j << " element is: ";
            cin >> arr[i][j];
        }
    }
}

void giv_mat()
{
    cout << "\nGiven matrix is\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
}

void average_filter()
{
    int sum, x;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            sum = 0;
            for (int k = i - 1; k <= i + 1; k++)
            {
                for (int l = j - 1; l <= j + 1; l++)
                {

                    if (k < 0 || k > row - 1 || l < 0 || l > col - 1)
                    {
                        x = 0;
                    }

                    else
                    {
                        x = arr[k][l];
                    }
                    sum = sum + x;
                }
            }
            newarr[i][j] = (float)sum / 9;
        }
    }
}

void filtered_mat()
{
    cout << "\nAverage filtered Matrix is:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << newarr[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main()
{
    cout << "Input the row size of the matrix: ";
    cin >> row;
    cout << "Input the column size of the matrix: ";
    cin >> col;

    input_arr();
    giv_mat();
    average_filter();
    filtered_mat();

    return 0;
}

/*
Sample Output:

Input the row size of the matrix: 3
Input the column size of the matrix: 3
Enter the 9 values:
0, 0 element is: 1
0, 1 element is: 2
0, 2 element is: 3
1, 0 element is: 4
1, 1 element is: 5
1, 2 element is: 6
2, 0 element is: 7
2, 1 element is: 8
2, 2 element is: 9

Given matrix is
1       2       3
4       5       6
7       8       9


Average filtered Matrix is:
1.33333 2.33333 1.77778
3       5       3.66667
2.66667 4.33333 3.11111
*/