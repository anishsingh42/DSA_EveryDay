#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int> temp;
    int n=q.size();
    while(!q.empty())
    {
        int top = q.front();
        temp.push(top);
        q.pop();
    }
    while(!temp.empty())
    {
        q.push(temp.top());
        temp.pop();
    }
    return q;
    
}