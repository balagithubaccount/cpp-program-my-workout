// Write a C program to compute the area of the various geometrical shape.

#include <iostream>
using namespace std;
#define PI 3.14285714

int main()
{
    int n;
    double Area;
    float r, a, w, l, b, h;

    cout << "Input '1' to find Area of the circle: ";
    cout << "\nInput '2' to find Area of the square: ";
    cout << "\nInput '3' to find Area of the rectangle: ";
    cout << "\nInput '4' to find Area of the triangle: \n";
    cin >> n;

    switch (n)
    {
    case 1:

        cout << "Input radius value: ";
        cin >> r;
        Area = PI * r * r;
        cout << "Area of the Circle is: " << Area << endl;
        break;

    case 2:

        cout << "Input 'a' value: ";
        cin >> a;
        Area = a * a;
        cout << "Area of the Square is: " << Area << endl;
        break;

    case 3:

        cout << "Input a values of 'w' and 'l': ";
        cin >> w >> l;
        Area = w * l;
        cout << "Area of the Rectangle is: " << Area << endl;
        break;

    case 4:

        cout << "Input a values of 'b' and 'h': ";
        cin >> b >> h;
        Area = 0.5 * b * h;
        cout << "Area of the Triangle is: " << Area << endl;
        break;

    default:
        cout << "Input a valid number.\n";
    }
    return 0;
}

/*
Sample Output:

Input '1' to find Area of the circle:
Input '2' to find Area of the square:
Input '3' to find Area of the rectangle:
Input '4' to find Area of the triangle:
2
Input 'a' value: 3.12432
Area of the Square is: 9.761375

*/