#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int res[1000];
    for(int i=1;i<=n;i++){
        int t;
        cin >> t;
        res[t] = i;
    }
    for(int i=1;i<=n;i++){
        cout << res[i] <<" ";
    }
    cout << endl;
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