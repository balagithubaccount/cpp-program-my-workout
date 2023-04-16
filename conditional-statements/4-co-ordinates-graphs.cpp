// 3.Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
// Test Data : 7 9
// Expected Output :
// The coordinate point (7,9) lies in the First quadrant.

#include <iostream>
using namespace std;

int main()
{
    float x_value, y_value;
    cout << "Input x and y coordinate: \n";
    cin >> x_value >> y_value;
    if (x_value > 0 && y_value > 0)
    {
        cout << "(" << x_value << ", " << y_value << ") lies in 1st quadrant.\n";
    }
    else if (x_value < 0 && y_value > 0)
    {
        cout << "(" << x_value << ", " << y_value << ") lies in 2nd quadrant.\n";
    }
    else if (x_value < 0 && y_value < 0)
    {
        cout << "(" << x_value << ", " << y_value << ") lies in 3rd quadrant.\n";
    }
    else
    {
        cout << "(" << x_value << ", " << y_value << ") lies in 4th quadrant.\n";
    }

    return 0;
}

/*
Sample Output:

Input x and y coordinate:
-5
7
(-5, 7) lies in 2nd quadrant.

*/