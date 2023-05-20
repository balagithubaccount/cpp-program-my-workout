// factorial

#include <iostream>
using namespace std;

int main()
{
    int i, n, f = 1;
    cout << "Input the number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    cout << "The factorial of " << n << " is : " << f << endl;
    return 0;
}

/*

Output:

Input the number: 6
The factorial of 6 is : 720

*/