#include <iostream>
using namespace std;

int main()
{
    int a, n1, n2, n5, n10, n20, n50, n100, n200, n500, n2000, Total;
    n1 = n2 = n5 = n10 = n20 = n50 = n100 = n200 = n500 = n2000 = 0;

    cout << "Enter amount: ";
    cin >> a;

    if (a == 0)
    {
        cout << "your input amount is 0.\nPlease enter valid amount..\n";
    }
    if (a < 0)
    {
        cout << "Your input amount is negative.\nPlease enter valid amount.\n";
    }

    if (a >= 2000)
    {
        n2000 = a / 2000;
        a = a - n2000 * 2000;
    }
    if (a >= 500)
    {
        n500 = a / 500;
        a = a - n500 * 500;
    }
    if (a >= 200)
    {
        n200 = a / 200;
        a -= n200 * 200;
    }
    if (a >= 100)
    {
        n100 = a / 100;
        a -= n100 * 100;
    }
    if (a >= 50)
    {
        n50 = a / 50;
        a -= n50 * 50;
    }
    if (a >= 20)
    {
        n20 = a / 20;
        a -= n20 * 20;
    }
    if (a >= 10)
    {
        n10 = a / 10;
        a -= n10 * 10;
    }
    if (a >= 5)
    {
        n5 = a / 5;
        a -= n5 * 5;
    }
    if (a >= 2)
    {
        n2 = a / 2;
        a -= n2 * 2;
    }
    if (a >= 1)
    {
        n1 = a / 1;
        a -= n1 * 1;
    }

    if (a == 0)
    {
        cout << "2000 = " << n2000 << " note\n";
        cout << "500 = " << n500 << " note\n";
        cout << "200 = " << n200 << " note\n";
        cout << "100 = " << n100 << " note\n";
        cout << "50 = " << n50 << " note\n";
        cout << "20 = " << n20 << " note\n";
        cout << "10 = " << n10 << " note\n";
        cout << "5 = " << n5 << " note\n";
        cout << "2 = " << n2 << " note\n";
        cout << "1 = " << n1 << " note\n";
    }

    Total = (n1 * 1) + (n2 * 2) + (n5 * 5) + (n10 * 10) + (n20 * 20) + (n50 * 50) + (n100 * 100) + (n200 * 200) + (n500 * 500) + (n2000 * 2000);
    cout << "Total amount = " << Total << " = Entered amount...\n";

    return 0;
}

/*
Sample Output:

Enter amount: 2923
2000 = 1 note
500 = 1 note
200 = 2 note
100 = 0 note
50 = 0 note
20 = 1 note
10 = 0 note
5 = 0 note
2 = 1 note
1 = 1 note
Total amount = 2923 = Entered amount...

*/