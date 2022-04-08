#include<bits/stdc++.h>
using namespace std;

//algo 1
//t.c = o(n)
//s.c= (o(n))
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> s;
    int n = q.size();
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    queue<int> temp;
    
    for(int i=k;i<n;i++){
        temp.push(q.front());
        q.pop();
    }
    
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    
    while(!temp.empty()){
        q.push(temp.front());
        temp.pop();
    }
    return q;
}


//algo 2
//t.c o(n)
//s.c o(k)
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> s;
    int n = q.size();
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    int i=q.size()-k;
    while(i--){
        int temp = q.front();
        q.pop();
        q.push(temp);

    }
    return q;
}