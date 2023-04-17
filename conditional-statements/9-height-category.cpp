// Write a C program to accept the height of a person in centimeter and categorize the person according to their height
#include <iostream>
using namespace std;
int main()
{
    float height_cm;
    cout << "Input your height in cm: ";
    cin >> height_cm;

    if (height_cm < 150)
    {
        cout << "The person is 'Dwarf'.\n";
    }
    else if (height_cm >= 150 && height_cm < 165)
    {
        cout << "The person is 'Average height'.\n";
    }
    else if (height_cm >= 165 && height_cm <= 195)
    {
        cout << "The person is 'Taller'.\n";
    }
    else
    {
        cout << "The person is 'Abnormal height'.\n";
    }
    return 0;
}

/*
Sample Output:

Input your height in cm: 196
The person is 'Abnormal height'.

*/