//Date: 1st Jan 2021
#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid)
{
    int cowCount=1;
    int lastPos = stalls[0];
    
    for(int i=0;i<stalls.size();i++)
    {
        if(stalls[i]-lastPos >= mid)
        {
            cowCount++;
            if(cowCount==k)
            {
                return false;
            }
            lastPos=stalls[i];        }
    }
    return true;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    //    Write your code here.
    int n=stalls.size();
    int start=0;
    int end = stalls[n-1];
    int maxDistance=-1;
    int mid;
    while(start <= end)
    {
        mid = start + ((end-start)/2);
        if(isPossible(stalls,k,mid))
        {
            end=mid-1;
        }
        else
        {
            maxDistance=mid;
            start=mid+1;
        }
    }
    //return maximum distance possible between two cows 
	return maxDistance;
}

int main()
{
    int n; cin >> n;
    vector<int> stalls(n);
    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        stalls.push_back(temp);
    }
    int k; cin >> k;
    cout << "Maximum Distance: " << aggressiveCows(stalls,k);
}