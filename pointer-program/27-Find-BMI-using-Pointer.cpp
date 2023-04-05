// Write a Cpp program to find BMI in the given height and weight using pointer.

#include <iostream>
using namespace std;

void BMI(float *H, float *W, float *result)
{
    cout << "Input the height(cm): ";
    cin >> *H;
    cout << "Input the Weight(Kg): ";
    cin >> *W;

    *H = *H / 100;
    *H = *H * *H;
    *result = *W / *H;
}
int main()
{
    float h, w, res;

    float *Height, *Weight, *Result;
    Height = &h;
    Weight = &w;
    Result = &res;

    BMI(Height, Weight, Result);

    cout << "\nYour BMI Result: " << *Result;

    if (res < 18.5)
        cout << "\nYour BMI Category: Underweight\n";
    else if (res >= 18.5 && res <= 25)
        cout << "\nYour BMI Category: Normalweight\n";
    else if (res > 25 && res <= 30)
        cout << "\nYour BMI Category: Overweight\n";
    else
        cout << "\nYour BMI Category: Obese\n";

    return 0;
}

/*

Sample Output:

Input the height(cm): 167
Input the Weight(Kg): 47

Your BMI Result: 16.8525
Your BMI Category: Underweight
*/