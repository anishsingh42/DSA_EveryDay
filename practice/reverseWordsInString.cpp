#include <bits/stdc++.h>
using namespace std;

//reverse a string
string reverseStr(string str)
{
    int end = str.size() - 1;
    string reverseString = "";
    while (end >= 0)
    {
        reverseString.push_back(str[end--]);
    }
    return reverseString;
}

string reverseWords(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        { // when i is a non-space
            int j = i;
            for (; j < s.length() && s[j] != ' '; j++)
            {
            } // move j to the next space
            reverse(s.begin() + i, s.begin() + j);
            i = j - 1; //bring i to the next word by making i  point to the space right before the word
        }
    }

    return s;
}
int main()
{

    string str;
    getline(cin, str);
    cout << "Original: " << endl << str << endl;
    // cout << reverseStr(str);

    cout << "Reversed " << endl << reverseWords(str);
    return 0;
}