// Write a C Program to display the pattern like pyramid using the alphabet.

#include <iostream>
using namespace std;

int main()
{
  int row, space, sp;
  char i, j;
  cout << "Input the Number of rows: ";
  cin >> row;
  space = row - 1;
  row = row + 65;

  for (i = 'A'; i < row; i++) 
  {
    for (sp = 1; sp <= space; sp++)
      cout << " ";
    for (j = 'A'; j <= i; j++)
      cout << j;
    for (j = i - 1; j >= 65; j--)
      cout << j;
    cout << "\n";
    space--;
  }
  return 0;
}

/*
Sample Output:

Input the Number of rows: 5
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/