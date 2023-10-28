
// Write a Cpp program to convert decimal number to binary number using the function.

#include <iostream>
using namespace std;

void convert(int dec);
int main()
{
   int dec;
   cout << "Enter the decimal Number: ";
   cin >> dec;
   convert(dec);
   return 0;
}
void convert(int dec)
{
   int i, bin = 0, rem, pos = 1;
   for (i = dec; dec != 0; dec /= 2)
   {
      rem = dec % 2;
      bin = bin + (pos * rem);
      pos *= 10;
   }
   cout << "The Binary value is: " << bin << endl;
}

/*
 Sample Output:

Enter the decimal Number: 10
The Binary value is: 1010

Enter the decimal Number: 18
The Binary value is: 10010
*/
