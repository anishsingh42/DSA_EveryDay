#include<bits/stdc++.h>
using namespace std;

void insertatBottom(stack<int> &a, int x)
{
    //base case
    if(a.empty())
    {
        a.push(x);
        return;
    }
    
    //operation
    int num = a.top();
    a.pop();
    
    //recursive call
    insertatBottom(a,x);
    
    ////insert the rest as it is
    a.push(num);
}

void reverseStack(stack<int> &a) {
    
    // Write your code here
    //base case
    if(a.empty())
    {
        return ;
    }
    
    //operation
    int num = a.top();
    a.pop();
    
    //recursive call
    reverseStack(a);
    
    //insert at bottom the number num
    insertatBottom(a,num);
}