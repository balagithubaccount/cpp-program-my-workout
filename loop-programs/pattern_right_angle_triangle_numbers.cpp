// Write a Cpp program pattern like right triangle number increased by 1;

#include <iostream>
using namespace std;

int main()
{
  int r, c, s = 1, n;
  cout << "enter the row: ";
  cin >> n;
  for (r = 1; r <= n; r++)
  {
    for (c = 1; c <= r; c++)
    {
      cout << s << " ";
      s++;
    }
    cout << endl;
  }
}
/*
Output:

enter the row: 5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/