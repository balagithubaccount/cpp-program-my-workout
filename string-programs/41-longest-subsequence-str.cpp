// Write a Cpp program to calculate the length of longest common subsequence of two given strings. The strings consist of alphabetical characters.

#include <iostream>
#include <string>
using namespace std;

#define max(x, y) ((x) > (y) ? (x) : (y))

void longest_common_subsequence(string str1, string str2, int n, int m)
{
    int result[50][50];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                result[i][j] = result[i - 1][j - 1] + 1;
            }
            else
            {
                result[i][j] = max(result[i - 1][j], result[i][j - 1]);
            }
        }
    }
    printf("\nLength of longest common subsequence of said strings: %d\n", result[n][m]);
}
int main()
{
    string str1, str2;

    cout << "Input a 1st string: ";
    getline(cin, str1);

    cout << "Input a 2nd string: ";
    getline(cin, str2);

    longest_common_subsequence(str1, str2, str1.length(), str2.length());

    return 0;
}

/*
Sample Outpu:1

Input a 1st string: axbca
Input a 2nd string: aybza

Length of longest common subsequence of said strings: 3

Sample Outpu:2

Input a 1st string: XPYQ
Input a 2nd string: XY

Length of longest common subsequence of said strings: 2

*/