#include<bits/stdc++.h>
using namespace std;

void interLeaveQueue(queue<int>& q){
    stack<int> s;
    int n = q.size();
    int mid = n/2;
    // step 1
    for(int i=0;i<mid;i++){
        int val = q.front();
        s.push(val);
        q.pop();
    } 
    // step 2    
    while(!s.empty()){
        int val = s.top();
        q.push(val);
        s.pop();
    }
    // step 3
    int i=0;
    while(i<mid){
        int val = q.front();
        q.push(val);
        i++;
        q.pop();
    }
    // step 4
    for(int i=0;i<mid;i++){
        int val = q.front();
        s.push(val);
        q.pop();
    }    
    // step 5
    while(!s.empty()){
        int val1 = s.top();
        q.push(val1);
        s.pop();
        int val2 = q.front();
        q.push(val2);
        q.pop();
    }
}


int main()
{
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    interLeaveQueue(q);
    int length = q.size();
    for (int i = 0; i < length; i++) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}