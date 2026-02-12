/*
Input:   strings = ["eat","tea","tan","ate","nat","bat"]
Output:  [["bat"],["nat","tan"],["ate","eat","tea"]]
*/

// All characters are lowercase only.

#include <iostream>
#include <vector>
using namespace std;

bool isAnagram(const string &str_1, const string &str_2)
{
    int alphabets[26] = {0};

    if (str_1.length() != str_2.length())
    {
        return false;
    }
    for (int it = 0; it < str_1.length(); it++)
    {
        alphabets[str_1[it] - 'a']++;
    }
    for (int it = 0; it < str_2.length(); it++)
    {
        alphabets[str_2[it] - 'a']--;
    }
    for (int it = 0; it < 26; it++)
    {
        if (alphabets[it])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    const string input[] = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> Groups;

    int size = sizeof(input) / sizeof(input[0]);

    for (int it = 0; it < size; it++)
    {
        bool found = false;
        for (int grp = 0; grp < Groups.size(); grp++)
        {
            bool result = isAnagram(Groups[grp][0], input[it]);
            if (result)
            {
                Groups[grp].push_back(input[it]);
                found = true;
                break;
            }
        }
        if (!found)
        {
            vector<string> newGroup;
            newGroup.push_back(input[it]);
            Groups.push_back(newGroup);
        }
    }

    for (const auto &group : Groups)
    {
        for (const auto &item : group)
        {
            cout << item << "\t";
        }
        cout << endl;
    }

    return 0;
}

/*
Output:

eat     tea     ate
tan     nat
bat

*/