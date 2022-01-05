#include <bits/stdc++.h>
using namespace std;

//reverse a string 
string reverseStr(string str)
{
    int end=str.size()-1;
    string reverseString="";
    while(end >= 0)
    {
        reverseString.push_back(str[end--]);
    } 
    return reverseString;
}


string reversePhrase(string str)
{
    string temp=""; string reversedPhraseDone="";
    for(int i=0;i<str.size();i++)
    {
        if(!(str[i] == ' ' || str[i] == '\0'))
        {
            temp.push_back(str[i]);
        }
        else
        {
            reversedPhraseDone=reverseStr(temp);
            reversedPhraseDone.push_back(' ');
        }
    }
    return reversedPhraseDone;
}

int main()
{

    string str;
    cin >> str;
    // cout << reverseStr(str);

    cout << reversePhrase(str);
    return 0;
}