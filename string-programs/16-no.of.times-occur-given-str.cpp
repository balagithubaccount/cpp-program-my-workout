// Write a program in Cpp to find the number of times a given word 'the' appears in the given string.

#include <iostream>
#include <string>
using namespace std;

int count_occur_given_string(string str, string word)
{
    int i, j, count, word_occur, temp, lenstr, lenword;
    i = j = word_occur = 0;
    lenstr = str.length();
    lenword = word.length();

start:
    temp = 0;
    if (i < lenword && j < lenstr)
    {
        temp = 1;
    }
    else
    {
        goto end;
    }
    count = 0;
    if ((word[i] == str[j] || word[i] + ' ' == str[j] || word[i] - ' ' == str[j]) && (temp == 1))
    {
        count++;
        while ((word[i + count] == str[j + count] || word[i + count] + ' ' == str[j + count] || word[i + count] - ' ' == str[j + count]) && (i + count < lenword))
        {
            count++;
        }
        if (count == lenword)
        {
            word_occur++;
            j++;
            goto start;
        }
        else
        {
            j++;
            goto start;
        }
    }
    else
    {
        j++;
        goto start;
    }
end:
    return word_occur;
}

int main()
{
    string str, word;
    int count;
    cout << "Input the string: ";
    getline(cin, str);
    cout << "Input the word: ";
    getline(cin, word);
    cout << "\nThe given String is: " << str << endl;
    cout << "The given word is: " << word << endl;
    count = count_occur_given_string(&str[0], &word[0]);
    if (count > 0)
    {
        cout << "The Frequency of the word '" << word << "' is: " << count << endl;
    }
    else
    {
        cout << "The Frequency of the word '" << word << "' does not occur in the given string.\n";
    }
}
/*
Sample Output:

Input the string: The string where the word the present more than once.
Input the word: the

The given String is: The string where the word the present more than once.
The given word is: the
The Frequency of the word 'the' is: 3.

*/