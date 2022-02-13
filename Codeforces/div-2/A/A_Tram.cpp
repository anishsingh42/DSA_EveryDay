#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int cnt=0;
    int minimumppl=0;
    while(n--){
        int a,b;
        cin >> a >> b;
        cnt=cnt-a+b;
        minimumppl=max(minimumppl,cnt);
    }   
    cout << minimumppl << " ";
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