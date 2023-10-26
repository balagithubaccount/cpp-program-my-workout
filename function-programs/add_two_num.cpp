// Write a Cpp program to add two numbers,  and to show the simple structure of a function.

#include <iostream>
using namespace std;

int add(int n1, int n2);
int main()
{
   int a, b;
   cout << "Enter the First number: ";
   cin >> a;
   cout << "Enter the Second number: ";
   cin >> b;
   cout << "The Total is: " << add(a, b) << endl;
   return 0;
}
int add(int n1, int n2)
{
   int sum;
   sum = n1 + n2;
   return sum;
}

/*
Output:

Enter the First number: 7
Enter the Second number: 7
The Total is: 14
*/