//Write a Cpp programming to multiple two given positive numbers represent as string. 

#include <iostream>
using namespace std;

int prod_num_str(char* ptr1, char* ptr2)
{
    cout << "\nOriginal Numbers: "<< ptr1 << " and " << ptr2 << endl;
    int a=0, b=0, place = 10;
    while(*ptr1 != '\0')
    {
        a = (a * place) + (*ptr1 - 48);     // ASCII Value of '0' is 48
        ptr1++;
    }
    while(*ptr2 != '\0')
    {
        b = (b*place) + (*ptr2 - 48);
        ptr2++;
    }
    return (a*b);
}
int main()
{
    string str1, str2;
    int sol;
    cout << "Input a String only digits: ";
    getline(cin, str1);

    cout << "Input a String only digits: ";
    getline(cin, str2);

    sol = prod_num_str(&str1[0],&str2[0]);
    cout << "Multiple two said numbers represent a string? " << sol << endl;

    return 0;
}

/*
Sample Output:

Input a String only digits: 100
Input a String only digits: 0

Original Numbers: 100 and 0
Multiple two said numbers represent a string? 0

*/