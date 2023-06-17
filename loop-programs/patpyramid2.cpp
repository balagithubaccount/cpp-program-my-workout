// Write a Cpp program pattern like a pyramid with numbers increased by 1.

#include <iostream>
using namespace std;

int main()
{
  int i, j, k = 1, s = 7;
  for (i = 1; i <= 4; i++)
  {
    for (j = 1; j <= s; j++)
    {
      cout << " ";
    }
    for (j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << "\n";
    s--;
  }
}

/*
Output:

       *
      * *
     * * *
    * * * *
*/