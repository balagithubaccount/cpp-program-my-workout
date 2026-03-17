/*
    Given an m x n matrix, return all elements of the matrix in spiral order.
    Input: matrix = {{1, 2, 3},{4, 5, 6},{7, 8,9}};
    Output: [1, 2, 3, 6, 9, 8, 7, 4, 5]
*/
#include <iostream>
using namespace std;

void displayMatrixSpiralOrder(int input[3][4], int row, int col)
{
    int row_val, col_val;
    // Index Based Values
    int top_left, top_right, bot_right, bot_left;

    int stop;

    top_left = 1;    // row
    top_right = col; // col
    bot_right = row; // row
    bot_left = 0;    // col

    row_val = 0;
    col_val = 0;

    bool isCompleted = false;

    while (!isCompleted)
    {
        isCompleted = true;

        // Top Left to Top Right
        while (col_val < top_right)
        {
            // cout << input[row_val][col_val] << " ";
            cout << "[" << row_val << "][" << col_val << "]" << input[row_val][col_val] << endl;
            col_val++;
            isCompleted = false;
        }
        top_right--;

        if (isCompleted)
        {
            break;
        }

        isCompleted = true;

        // Top Right to Bottom Right
        col_val--;
        row_val++;
        while (row_val < bot_right)
        {
            // cout << input[row_val][col_val] << " ";
            cout << "[" << row_val << "][" << col_val << "]" << input[row_val][col_val] << endl;
            row_val++;
            isCompleted = false;
        }
        bot_right--;

        if (isCompleted)
        {
            break;
        }

        isCompleted = true;

        // Bottom Right to Bottom Left
        col_val--;
        row_val--;
        while (col_val >= bot_left)
        {
            // cout << input[row_val][col_val] << " ";
            cout << "[" << row_val << "][" << col_val << "]" << input[row_val][col_val] << endl;
            col_val--;
            isCompleted = false;
        }
        bot_left++;

        if (isCompleted)
        {
            break;
        }

        isCompleted = true;

        // Bottom Left to Top Right
        col_val++;
        row_val--;
        while (row_val >= top_left)
        {
            // cout << input[row_val][col_val] << " ";
            cout << "[" << row_val << "][" << col_val << "]" << input[row_val][col_val] << endl;
            row_val--;
            isCompleted = false;
        }
        top_left++;

        row_val++;
        col_val++;

        if (isCompleted)
        {
            break;
        }
    }

    cout << endl;
}

int main()
{
    int input[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    displayMatrixSpiralOrder(input, 3, 4);

    return 0;
}