// Write a Cpp program to Check Whether a Number can be Express as Sum of Two Prime

#include <iostream>
using namespace std;

int main()
{
  int num, i, j, k, l, count, temp = 0;
  cout << "Input the Number: ";
  cin >> num;

  for (i = num - 1; i >= 1; i--)
  {
    for (j = 1; j <= num - 1; j++)
    {
      count = 0;
      if (i + j == num)
      {
        for (k = 1; k <= i; k++)
        {
          if (i % k == 0)
          {
            count++;
          }
        }
        temp = (count == 2) ? count : 0;
        for (l = 1; l <= j && temp == 2; l++)
        {
          if (j % l == 0)
          {
            count++;
          }
        }
      }
      if ((count - temp) == 2)
        cout << num << " = " << i << " + " << j << endl;
    }
  }
  return 0;
}

/*
Sample output:

Input the Number: 22
22 = 19 + 3
22 = 17 + 5
22 = 11 + 11
22 = 5 + 17
22 = 3 + 19

*/