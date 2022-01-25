#include <bits/stdc++.h>
using namespace std;

void reverse(string &s, int start, int end)
{
    //base case
    if (start >= end)
        return;

    //processing and recursive call
    swap(s[start++], s[end--]);
    reverse(s, start, end);
}
void reverseString(string &s)
{
    //Loops
    // int n=s.size();
    // for(int i=0,j=n-1;i<=j;i++,j--)
    // {
    //     swap(s[i],s[j]);
    // }

    //recursive
    int n = s.size();
    reverse(s, 0, n - 1);
}

int main()
{
    string str = "hello";
    cout << "String before reverse: " << str;
    cout << endl;
    reverseString(str);
    cout << "String after reverse: " << str << endl;
    return 0;
}