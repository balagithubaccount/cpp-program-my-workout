// Write a program in C to display the such a pattern for n number of rows using a number which will start with the number 1 and the first
// and a last number of each row will be 1.

#include <iostream>
using namespace std;

int main()
{
  int row, space, sp, i, j;
  cout << "Input the Number of rows: ";
  cin >> row;
  space = row - 1;

  for (i = 1; i <= row; i++)
  {
    for (sp = 1; sp <= space; sp++)
      cout << " ";
    for (j = 1; j <= i; j++)
      cout << j;
    for (j = i - 1; j >= 1; j--)
      cout << j;
    cout << "\n";
    space--;
  }
  return 0;
}

/*
Sample Output:

Input the Number of rows: 5
    1
   121
  12321
 1234321
123454321

*/