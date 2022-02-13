#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    int k;
    cin >> n >> k;
    while(k--){
        if(n%10 != 0)
        {
            n-=1;
        }
        else{
            n/=10;
        }
    }
    cout << n << " " << "\n";
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