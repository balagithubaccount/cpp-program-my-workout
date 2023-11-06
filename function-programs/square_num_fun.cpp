
// Write a Cpp program to find the square of any number using the function.

#include <iostream>
using namespace std;

void square(int num);
int main()
{
   int n;
   cout << "Enter the number: ";
   cin >> n;
   square(n);
   return 0;
}
void square(int num)
{
   int sqr = num * num;
   cout << "The square of " << num << " is: " << sqr << endl;
}

/*
Output:

Enter the number: 20
The square of 20 is: 400

*/
