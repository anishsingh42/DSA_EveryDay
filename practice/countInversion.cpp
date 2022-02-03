#include<bits/stdc++.h>
using namespace std;
#define ll long long

void binarySearch(ll *arr, ll val, vector<ll> &ans, ll s, ll e){
    int mid;
    while(s<e){
        mid = s + ((e-s)/2);
        if(arr[mid] < val){
            ans.push_back(arr[mid]);
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
}

ll inversionCount(ll *arr, ll n){
    ll cnt=0;

    /** Inversion Count Condition
     * arr[i] > arr[j]
     * given that i < j
    */

    /*brute force*/
    /*
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            if(arr[i] > arr[j] && i<j){
                cnt++;
            }
        }
    }
        //T.C = O(n^2);
        //S.C = O(1);
    */

    for(ll i=0;i<n;i++){
        vector<ll> ans;
        binarySearch(arr,arr[i],ans,i,n-1);
        // for(auto it: ans){
        //     cout << arr[i] << " " << it << endl;
        // }
        cnt+=ans.size();
        
    }
    return cnt;
}

int main()
{
    ll n;
    cin >> n;
    ll *arr = new ll[n];
    for(ll i=0;i<n;i++){
        cin >> arr[i];
    }
    ll count = inversionCount(arr,n);
    cout << count << endl;
    return 0;
}