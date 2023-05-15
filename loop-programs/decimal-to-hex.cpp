// Write a Cpp program to convert a decimal number to hexadecimal

#include <iostream>
using namespace std;

int main()
{
    int dec, j, i = 0, r;
    char arr[50];
    cout << "Enter the decimal number: ";
    cin >> dec;

    for (j = dec; dec != 0; dec = dec / 16)
    {
        r = dec % 16;
        if (r < 10)
        {
            arr[i] = '0' + r;
        }
        else
        {
            arr[i] = 'A' + (r - 10);
        }
        i++;
    }
    cout << "The equivalent Hexadecimal Number : ";
    for (i = i - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    cout << endl;
}

/*
Output:

Enter the decimal number: 79
The equivalent Hexadecimal Number : 4F

*/