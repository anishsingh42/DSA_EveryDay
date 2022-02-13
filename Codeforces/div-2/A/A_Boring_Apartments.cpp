#include<bits/stdc++.h>
using namespace std;
void solve(){
    string x;
    cin >> x;
    int dig = x[0] - '0' - 1;
    int len = x.size();
    int ans = dig * 10 + len * (len + 1) / 2;
    cout << ans << "\n";
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