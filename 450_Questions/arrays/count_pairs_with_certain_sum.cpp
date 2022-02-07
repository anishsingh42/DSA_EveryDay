#include<bits/stdc++.h>
using namespace std;

int countPairs(int *arr, int n, int k)
{
    int cnt=0;
    /**
     * Brute force
    */
    /*
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j] == k)
                cnt++;
        }
    }
    */
    /**
     * Better method
    */
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        //i/p: 1 , 5 , 7, 1
        // o/p: 0 2 0 0 0 1 0 1
        m[arr[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        int diff = k-arr[i];
        cnt += m[diff];
        if(diff == arr[i])
            cnt--;
    }
    return cnt/2;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << countPairs(arr,n,k) << endl;
    return 0;
}