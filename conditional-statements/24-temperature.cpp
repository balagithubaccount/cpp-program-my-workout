// Write a Cpp program to read temperature in centigrade and display a suitable message according to temperature state below.
//  Temp < 0 then Freezing weather
//  Temp 0-10 then Very Cold weather
//  Temp 10-20 then Cold weather
//  Temp 20-30 then Normal in Temp
//  Temp 30-40 then Its Hot
//  Temp >=40 then Its Very Hot
//  Test Data :
//  42
//  Expected Output :
//  Its very hot.

#include <iostream>
using namespace std;

int main()
{
    float temp;
    cout << "Input temperature in centigrade: ";
    cin >> temp;

    if (temp < 0)
    {
        cout << "Freezing weather.\n";
    }
    else if (temp < 10)
    {
        cout << "Very cold weather.\n";
    }
    else if (temp < 20)
    {
        cout << "Cold weather.\n";
    }
    else if (temp < 30)
    {
        cout << "Normal in Temperature.\n";
    }
    else if (temp < 40)
    {
        cout << "Its Hot.\n";
    }
    else
    {
        cout << "Its Very Hot.\n";
    }

    return 0;
}
