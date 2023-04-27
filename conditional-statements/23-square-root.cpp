//  To find all roots of a quadratic equation.
//  General form of the Quadratic equation (ax^2+bx+c=0)
//  s=b^2-4ac.
//  sqr = (b^2-4ac)^1/2

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, d;
    double s, sqr, n1, n2, r1, r2;

    cout << "Enter a value: ";
    cin >> a;

    cout << "Enter b value: ";
    cin >> b;

    cout << "Enter c value: ";
    cin >> c;

    s = (b * b) - (4 * a * c);
    sqr = sqrt(s);

    b = -1 * b;
    d = 2 * a;

    n1 = b + sqr;
    n2 = b - sqr;

    r1 = n1 / d, r2 = n2 / d;

    if (s > 0 || s == 0)
    {
        cout << "1st Root: " << r1 << endl;
        cout << "2nd Root: " << r2 << endl;
    }
    else
    {
        cout << "Roots are Imaginary... \n";
    }
    return 0;
}

/*
Sample Output:

Enter a value: 1
Enter b value: -3
Enter c value: 2
1st Root: 2.000000
2nd Root: 1.000000

*/