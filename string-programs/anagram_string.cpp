/*
Input:   strings = ["eat","tea","tan","ate","nat","bat"]
Output:  [["bat"],["nat","tan"],["ate","eat","tea"]]
*/

#include <iostream>
#include <vector>
using namespace std;

bool isAnagram(const string &str1, const string &str2)
{
    if (str1.length() <= 0 || str2.length() <= 0 || str1.length() != str2.length())
    {
        return false;
    }

    vector<char> countedChar;

    int ind = 0;
    while (str1[ind] != '\0')
    {
        for (const auto &item : countedChar)
        {
            if (item == str1[ind])
            {
                continue;
            }
        }

        int str1Count = 0;
        int i = 0;
        while (str1[i] != '\0')
        {
            if (str1[ind] == str1[i])
            {
                str1Count++;
            }
            i++;
        }
        // cout << "Str1 char: " << str1[ind] << ": " << str1Count;

        int str2Count = 0;
        i = 0;
        while (str2[i] != '\0')
        {
            if (str1[ind] == str2[i])
            {
                str2Count++;
            }
            i++;
        }
        // cout << "Str2 char: " << str1[ind] << ": " << str2Count << endl;

        if (str1Count != str2Count)
        {
            return false;
        }

        countedChar.push_back(str1[ind]);
        ind++;
    }

    return true;
}
int main()
{
    vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> outputs;

    for (int item = 0; item < input.size(); item++)
    {
        if (item == 0)
        {
            vector<string> newList;

            newList.push_back(input.at(item));
            outputs.push_back(newList);
        }
        else
        {
            int isFound = false;
            for (auto &list : outputs)
            {
                if (isAnagram(list.at(0), input.at(item)))
                {
                    list.push_back(input.at(item));
                    isFound = true;
                    break;
                }
            }

            if (!isFound)
            {
                vector<string> freshLish;

                freshLish.push_back(input.at(item));
                outputs.push_back(freshLish);
            }
        }
    }

    cout << "\nInput:\n";
    for (const auto &item : input)
    {
        cout << item << "\t";
    }

    cout << "\nOutput:\n";

    for (const auto &list : outputs)
    {
        for (const auto &item : list)
        {
            cout << item << "\t";
        }
        cout << endl;
    }

    return 0;
}
