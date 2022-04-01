#include<bits/stdc++.h>
using namespace std;


bool isValid(string s) {
        if(s.size()%2!=0)
            return false;
        stack<int> s1;
        for(auto i: s)
        {
            if(i == '(' || i == '[' || i == '{')
            {
                s1.push(i);
            }
            else{
            if(s1.empty() || (s1.top() == '{' && i!='}') || (s1.top() == '[' && i!=']') || (s1.top() == '(' && i!=')'))return false;
            
            s1.pop();
            }
        }
        return s1.empty();
    }