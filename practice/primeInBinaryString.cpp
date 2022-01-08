#include <bits/stdc++.h>
using namespace std;

/*
You are given a binary string S of length N. Your task is to check if there exists a substring of S

which is the binary representation of a prime number.

Formally, check if there exist integers L
and R such that 1≤L≤R≤N, and the substring SLSL+1SL+2…SR

, when treated as a binary integer, is prime.

Print "Yes" if such a substring exists, and "No" if it doesn't.
*/
bool primeSubstring(string str)
{
    int i = 0;
    while (i < str.size())
    {
        if (str[i] == '1')
        {
            if (str[i + 1] == '0' || str[i + 1] == '1')
                return true;
        }
        i++;
    }
    return false;
}
int main()
{
    // your code goes here
    long long int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        if (primeSubstring(str))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
