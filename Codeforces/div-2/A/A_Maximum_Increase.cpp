#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> arr;
    int cnt=0;
    int maxcnt=INT_MIN;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        arr.push_back(t);
        if(i!=0)
        {
            if(arr[i] > arr[i-1])
                cnt++;
            else    
                cnt=0;
        }
        maxcnt = max(maxcnt,cnt);
    }
    cout << maxcnt+1 << "\n";
}
int main()
{
    // int tt;
    // cin >> tt;
    // while(tt--){
        solve();
    // }
    return 0;
}