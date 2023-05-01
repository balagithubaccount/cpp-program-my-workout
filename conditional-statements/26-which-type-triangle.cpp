//  Write a Cpp program to check whether a triangle is Equilateral, Isosceles or Scalene.
//  Test Data :
//  50 50 60
//  Expected Output :
//  This is an isosceles triangle.

#include <iostream>
using namespace std;

int main()
{
    float a, b, c;

    cout << "Input Three sides of triangle: \n";
    cin >> a >> b >> c;

    if (a == b && a == c)
    {
        cout << "This is an Equilateral triangle.\n";
    }
    else if (a == b || a == c || b == c)
    {
        cout << "This is an Isosceles triangle.\n";
    }
    else
    {
        cout << "This is an Scalene triangle.\n";
    }
    return 0;
}

/*
Sample Output:

Input Three sides of triangle:
40  50  60
This is an Scalene triangle.

*/