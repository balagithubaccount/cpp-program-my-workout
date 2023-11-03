// Write a Cpp program to check a given number is even or odd using the function.

#include <iostream>
using namespace std;

void oddoreven(int num);
int main()
{
   int n;
   cout << "Enter the number: ";
   cin >> n;
   oddoreven(n);
   return 0;
}
void oddoreven(int num)
{
   if (num % 2 == 0)
   {
      cout << "The Given number " << num << " is Even.\n";
   }
   else
   {
      cout << "The Given number " << num << " is Odd.\n";
   }
}

/*
Sample Output:1

Enter the number: 76
The Given number 76 is Even.

Sample Output:2

Enter the number: 75
The Given number 75 is Odd.

*/
