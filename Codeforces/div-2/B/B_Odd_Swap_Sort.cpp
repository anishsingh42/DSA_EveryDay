#include<bits/stdc++.h>
using namespace std;
#define mod 100000
bool isSorted(vector<int> a){
    if(a.size() == 1 || a.size() == 0)
        return true;
    for(int i=1;i<a.size();i++){
        if(a[i-1] > a[i])
            return false;
    }
    return true;
}
void solve(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        arr.push_back(t);
    }
    vector<int> odd;
    vector<int> even;
    for(int i=0;i<n;i++){
        if((arr[i]%mod)%2 == 0)
            even.push_back(arr[i]);
        else 
            odd.push_back(arr[i]);
    }   
    bool okSorted = isSorted(odd);
    okSorted &= isSorted(even);
    cout << (okSorted ? "Yes" : "No") << '\n';
}
int main()
{
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}