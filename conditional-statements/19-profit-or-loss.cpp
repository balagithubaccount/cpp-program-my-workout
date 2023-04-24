// Write a Cpp program to calculate profit or loss.

// IA- Investment Amount, GA-Gain amount, P-Profit.

#include <iostream>
using namespace std;

int main()
{
    float IA, GA, P;
    cout << "Enter the Investment Amount(In Rs.): ";
    cin >> IA;
    cout << "Enter the Gain Amount(In Rs.): ";
    cin >> GA;

    P = IA - GA;

    if (P < 0)
    {
        P = (-1) * P;
        cout << "Profit amount is " << P << "Rs.\n";
    }
    else if (P > 0)
    {
        cout << "Loss amount is " << P << "Rs.\n";
    }
    else
    {
        cout << "without Profit and Loss";
    }

    return 0;
}


/*
Sample Output:

Enter the Investment Amount(In Rs.): 4591.873
Enter the Gain Amount(In Rs.): 4289.74
Loss amount is 302.133Rs.

*/