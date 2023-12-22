#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    int result;

    result = a ? ((b > 0) ? (a = 10) : (a = 5)) : a;

    cout << "Result: " << result << endl;

    return 0;
}

/*
Sample Output:

Result: 10
*/