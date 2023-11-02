// Write a Cpp program to find median filter for the given square matrix.

// Median Filter

#include <iostream>
using namespace std;

int main_mat[10][10];
int result_mat[10][10];
int sort[10];
int row, col;

int sorting_arr();

void get_elements()
{
    cout << "Input the " << row * col << " Elements for " << row << " x " << col << " matrix:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << i << ", " << j << " Element : ";
            cin >> main_mat[i][j];
        }
    }
}
void print_elements()
{
    cout << "Givern matrix is:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << main_mat[i][j] << "\t";
        }
        cout << "\n";
    }
}
int meadian_Process()
{
    int pos;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pos = 0;
            for (int k = i - 1; k <= i + 1; k++)
            {
                for (int l = j - 1; l <= j + 1; l++)
                {
                    if (k < 0 || k > row - 1 || l < 0 || l > col - 1)
                    {
                        sort[pos] = 0;
                        pos++;
                    }
                    else
                    {
                        sort[pos] = main_mat[k][l];
                        pos++;
                    }
                }
            }
            result_mat[i][j] = sorting_arr();
        }
    }
}
int sorting_arr()
{
    int temp, i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 9; j++)
        {
            if (sort[i] > sort[j])
            {
                temp = sort[j];
                sort[j] = sort[i];
                sort[i] = temp;
            }
        }
    }
    return sort[4]; // 4'th index is a middle element for sorted array.
}

void meadian_matrix()
{
    cout << "\n\nMeadian filtered matrix is:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << result_mat[i][j] << "\t";
        }
        cout << "\n";
    }
}
int main()
{
    cout << "Input the row size: ";
    cin >> row;
    cout << "Input the column size: ";
    cin >> col;

    get_elements();
    print_elements();
    meadian_Process();
    meadian_matrix();

    return 0;
}

/*
Sample Output:

Input the row size: 3
Input the column size: 3
Input the 9 Elements for 3 x 3 matrix:
0, 0 Element : 1
0, 1 Element : 2
0, 2 Element : 3
1, 0 Element : 4
1, 1 Element : 5
1, 2 Element : 6
2, 0 Element : 7
2, 1 Element : 8
2, 2 Element : 9
Givern matrix is:
1       2       3
4       5       6
7       8       9


Meadian filtered matrix is:
0       2       0
2       5       3
0       5       0

*/
