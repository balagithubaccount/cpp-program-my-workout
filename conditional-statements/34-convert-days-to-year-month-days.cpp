// Write a Cpp program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.

#include <iostream>
using namespace std;

int main()
{
    int days;
    int year, month, day;

    cout << "Input the number of days: " ;
    cin >> days;
    cout << endl;

    if(days > 0)
    {
        year = days / 365;
        days = days - (365*year);
        month = days / 30;
        days = days - (30*month);
        day = days;

        cout << year << " - Year(s)\n";
        cout << month << " - Month(s)\n";
        cout << day << " - Day(s)\n";

    }
    else
    {
        cout << "Input data is invalid!\n";
    }

    return 0;
}

/*
Sample Output:

Input the number of days: 1243

3 - year(s)
4 - month(s)
28 - day(s)

*/