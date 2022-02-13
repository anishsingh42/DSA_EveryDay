#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,n;
    cin >> a >> b >> n;
    int cnt=0;
    int c=INT_MIN;
    while(c <= n)
    {
        c = a+b;
        b = max(a,b);
        a = c;
        cnt++;
    }
    cout << cnt << "\n";
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