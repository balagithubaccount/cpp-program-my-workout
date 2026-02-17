// Find the longest common prefix
/*
    input: {"flower", "flow", "flight"}
    Output: "fl"

    input: {"dog", "racecar", "car"}
    Output: ""

    Input: {"apple", "app", "application"}
    Output: "app"

    Input: {"interview", "internet", "internal"}
    Output: "inter"

    Input:  {"sun", "sunlight", "sunrise"}
    Output: "sun"

    Input:  {"cat", "dog", "mouse"}
    Output: ""

    Input:  {"red", "blue", "green"}
    Output: ""

    Input:  {"alone"}
    Output: "alone"

    Input:  {}
    Output: ""

    Input:  {"flower", "", "flow"}
    Output: ""

    Input:  {"same", "same", "same"}
    Output: "same"

    Input:  {"test123", "test456", "test789"}
    Output: "test"

    Input:  {"abcdefgh", "abcdefxyz", "abcdef123"}
    Output: "abcdef"

    Input:  {"a", "ab", "abc"}
    Output: "a"

    Input:  {"ab", "a"}
    Output: "a"

    Input:  {"longestcommonprefix", "longestcommon", "longest"}
    Output: "longest"

*/

#include <iostream>
#include <string>
using namespace std;

string longPrefix(const string input[], const int &size)
{
    string output;

    if (size == 0)
    {
        return output;
    }
    else if (size == 1)
    {
        output = input[0];
        return output;
    }

    if (input[0].length() > 0)
    {
        for (int ind = 0; ind < input[0].length(); ind++)
        {
            char ch = input[0][ind];
            // cout << ch << endl;

            bool isEqual = true;
            int word = 1;
            while (word < size)
            {
                // cout << input[word][ind] << endl;
                if (ch != input[word][ind])
                {
                    // cout << "mismatch ch: " << ch << endl;
                    isEqual = false;
                    return output;
                }
                word++;
            }
            if (isEqual)
            {
                // cout << "match ch: " << ch << endl;
                output.push_back(ch);
                // cout << ind << " : " << output << endl;
            }
        }
    }

    return output;
}
int main()
{
    // string str[] = {"flower", "flow", "flight"};
    string str[] = {"ab", "a"};
    int size = sizeof(str) / sizeof(str[0]);

    string output = longPrefix(str, size);

    cout << "Longest common prefix: " << output << endl;
    return 0;
}
