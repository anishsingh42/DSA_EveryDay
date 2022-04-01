#include<bits/stdc++.h>
using namespace std;
#include<stack>
int findMinimumCost(string str) {
  // Write your code here
   if(str.size()%2!=0)
       return -1;
    
    int a=0; // inward
    int b=0; // outward
    stack <char> s;
    for(int i=0;i<str.size();i++)
    {
        if(str[i] == '{')
        {
            s.push(str[i]);
        }
        else
        {
            if(!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
            {
                s.push(str[i]);
            }
        }
        
    }
    if(s.empty())
        return 0;
    //invalid char in stack
    while(!s.empty())
    {
        if(!s.empty() && s.top() == '{')
        {
            a++;
            s.pop();
        }
        else if(!s.empty() && s.top() == '}')
        {
            b++;
            s.pop();
        }
    }
    int ans = (a+1)/2 + (b+1)/2;
    return ans;
}