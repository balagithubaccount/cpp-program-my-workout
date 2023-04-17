// Write a Cpp program to find log(base 10) value for the given value.

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double v, log_v;

    cout << "Input the Value: ";
    cin >> v;

    log_v = log10(v);
    cout << "\nlog(" << v << ") = " << log_v << endl;

    return 0;
}

/*
Sample Output:

Input the Value: 99.99

log(99.99) = 1.99996

*/