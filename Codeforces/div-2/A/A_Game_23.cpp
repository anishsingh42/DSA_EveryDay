#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    int quotient = m/n;
    int cnt=-1;
    if(m%n==0){
        cnt=0;
        while(quotient%2==0 && quotient!=1){
            quotient/=2;
            cnt++;
        }
        while(quotient%3==0 && quotient!=1){
            quotient/=3;
            cnt++;
        }
        if(quotient!=1)
            cnt=-1;
    }
    cout << cnt << '\n';
    
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