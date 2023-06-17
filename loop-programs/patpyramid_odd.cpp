// Write a Cpp program patern print use asterisk for each row odd number of asterisks..

#include <iostream>
using namespace std;

int main()
{
  int n, i, a = 1, s, j;
  cout << "Input the total rows: ";
  cin >> n;
  s = n - 1;
  for (j = 1; j <= n; j++)
  {
    for (i = 1; i <= s; i++)
    {
      cout << " ";
    }
    for (i = 1; i <= a; i++)
    {
      cout << "*";
    }
    a += 2;
    cout << "\n";
    s--;
  }
  return 0;
}

/*
Sample output:

Input the total rows: 6
     *
    ***
   *****
  *******
 *********
***********

*/