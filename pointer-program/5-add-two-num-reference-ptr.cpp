// Write a Cpp program to add numbers using call by reference.

#include <iostream>
using namespace std;

int add(int *p1, int *p2)
{
    return (*p1 + *p2);
}

int main()
{
    int a,b;
    cout << "Input two integer values: \n";
    cin >> a >> b;
    cout << "Sum is: " << add(&a, &b) << endl;

    return 0;
}

/*
Sample Output:

Input two integer values: 
9
3
Sum is: 12
  
*/