#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    int m;
    cin >> n >> m;

    if(n >=  m){
        int a = n/2;
        int b = n - (2*a);
        int cnt = a+b;
        if(cnt%m == 0)
            cout << cnt << '\n';
        else{
            while(!(cnt%m==0)){
                cnt++;
            }
            cout << cnt << '\n';
        }
    }
    else
        cout << -1 << '\n';
}
int main()
{
    // int tt;
    // cin >> tt;
    // while(tt--){
        
    // }
    solve();
    return 0;
}