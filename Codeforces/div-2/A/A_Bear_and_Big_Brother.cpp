#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin >> a >> b;
    int cnt=0;
    while(a<=b){
        a *= 3;
        b *= 2;
        cnt++;
    }
    cout << cnt << "\n";
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