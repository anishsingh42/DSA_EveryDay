//Date : 25 Sept 2021

#include<bits/stdc++.h>
using namespace std;


int maxLen(vector<int>&A, int n)
{
        unordered_map<int,int>mp;
        int count=0;
        int sum=0; 
        //beginning we consider index -1 and sum = 0
        mp[sum]=-1;
        for(int i=0;i<n;i++){
            sum+=A[i];
        if(mp.find(sum)!=mp.end())
            count=max(count,i-mp[sum]);
        else 
            mp[sum]=i;
        }
        return count;
}


int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout<<maxLen(arr,n)<<endl;
    return 0;
}