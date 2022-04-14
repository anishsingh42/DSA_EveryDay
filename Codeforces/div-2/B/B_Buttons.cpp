#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int sum = 0;

    for(int i=1;i<=n;i++){
        sum += (n-i)*i;
    }

    cout << sum+n << '\n';
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