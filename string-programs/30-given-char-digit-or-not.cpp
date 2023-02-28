//Write a C program to check whether a character is digit or not. 

#include <iostream>
using namespace std;

int digit_or_not(char var)
{
   if(var >= '0' && var <= '9')
   {
      return 1;
   }
   else 
   {
      return 0;
   }
}
int main()
{
   char var;
   cout << "Input a cahracter: ";
   cin >> var;
  
   cout << "\nThe entered character is: " << var << endl;

   if(digit_or_not(var) > 0)
      cout << "The Entered character is a digit.\n";
   else
      cout << "The Entered character is not a digit.\n";
   return 0;
}

/*
Sample Output:1

Input a cahracter: d

The entered character is: d
The Entered character is not a digit.


*/