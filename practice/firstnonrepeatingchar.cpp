#include<bits/stdc++.h>
using namespace std;

string FirstNonRepeating(string A){
		    // Code here
		    int cnt[26] = {0};
		    string res="";
		    
		    queue<char> q;
		    int n=A.size();
		    for(int i=0;i<n;i++){
		        char ch = A[i];
		        int index = ch - 97;
		        cnt[index]++;
		        
		        q.push(ch);
		        while(!q.empty()){
		            int top = q.front() - 97;
		            
		            if(cnt[top] > 1)
		                q.pop();
		            else{
		                res += q.front();
		                break;
		            }
		        }
		        if(q.empty()){
		            res += '#';
		        }
		    }
		    return res;
		}