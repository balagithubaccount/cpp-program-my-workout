// Write a Cpp program pattern pyramid for same row same number;

#include <iostream>
using namespace std;

int main()
{
  int i, j, s = 7;
  for (i = 1; i <= 4; i++)
  {
    for (j = 1; j <= s; j++)
    {
      cout << " ";
    }
    for (j = 1; j <= i; j++)
    {
      cout << i << " ";
    }
    cout << "\n";
    s--;
  }
  return 0;
}

/*
Output:

       1
      2 2
     3 3 3
    4 4 4 4

*/