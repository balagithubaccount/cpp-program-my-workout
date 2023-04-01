// Write a Cpp program to input and print elements of a two dimensional array using pointers.

#include <iostream>
using namespace std;

const int row = 4, col = 4;

void input_matrix(int (*mat)[col])
{
    cout << "Input the "<< row*col <<" elements:\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cin >> *(*(mat + i) + j);
        }
    }
}
void print_matrix(int mat[][col])
{
    cout << "Given Matrix is: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << *(*(mat + i) + j) << "\t";
        }
        cout << "\n";
    }
}
int main()
{
   int mat[row][col];

   input_matrix(mat);
   print_matrix(mat);
   return 0;
}

/*
Sample Output:

Input the 16 elements:
1 2 3 4
5 6 7 8
9 0 1 12
2 4 6 77
Given Matrix is: 
1       2       3       4
5       6       7       8
9       0       1       12
2       4       6       77

*/