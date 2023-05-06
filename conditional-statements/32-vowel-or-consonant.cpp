// Write a Cpp program to find the entered alphabet is vowel or consonant.

#include <iostream>
using namespace std;

int main()
{
    char c;

    cout << "Enter any one alphabet: ";
    cin >> c;

    if (c == 65 || c == 'E' || c == 73 || c == 'O' || c == 85)
        cout << "Entered alphabet '" << c << "' is vowel.\n";
    else if (c == 'a' || c == 101 || c == 'i' || c == 111 || c == 'u')
        cout << "Entered alphabet '" << c << "' is vowel.\n";
    else
        cout << "Entered alphabet '" << c << "' is consonant.\n";
    return 0;
}

/*
Sample Output:

Enter any one alphabet: Z
Entered alphabet 'Z' is consonant.

*/