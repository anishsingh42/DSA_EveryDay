#include<bits/stdc++.h>
using namespace std;
void solve(){
    int k,n,w;
    cin >> k >> n >> w;
    int bananaprice = 0;
    for(int i=1;i<=w;i++){
        bananaprice += k*i;
        // cout << bananaprice << "\n";
    }
    int diff = bananaprice-n;
    if(diff<=0)
        diff=0;
    cout << diff << "\n";

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