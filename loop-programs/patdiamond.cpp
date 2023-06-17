// Write a Cpp program to display the pattern like a diamond.

#include <iostream>
using namespace std;

int main()
{
   int row, s, b, main, a, p;
   cout << "Input the number of rows: ";
   cin >> row;

   s = row * 2;
   b = 1;

   for (main = 1; main <= row; main++)
   {
      for (a = 1; a <= s; a++)
      {
         cout << " ";
      }
      for (p = 1; p <= b; p++)
      {
         cout << "*";
      }
      cout << "\n";
      b += 2;
      s--;
   }
   s = s + 2;
   b = b - 4;
   for (main = 1; main <= row - 1; main++)
   {
      for (a = 1; a <= s; a++)
      {
         cout << " ";
      }
      for (p = 1; p <= b; p++)
      {
         cout << "*";
      }
      cout << "\n";
      s++;
      b -= 2;
   }

   return 0;
}

/*
Sample output:

Input the number of rows: 5
          *
         ***
        *****
       *******
      *********
       *******
        *****
         ***
          *

*/