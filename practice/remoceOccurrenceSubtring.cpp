#include<bits/stdc++.h>
using namespace std;


string remvoveOccurrence(string s, string part) {
       // s.find() // gives the leftmost index 
        //s.erase() // removes the substring 
        while(s.size()!=0 && s.find(part) < s.size())
        {
            s.erase(s.find(part) , part.size());
        }
        return s;
    }

int main()
{
string str;
cin >> str;
string part;
cin >> part;
cout << "after removing subtring from string: " << remvoveOccurrence(str, part);
return 0;
}