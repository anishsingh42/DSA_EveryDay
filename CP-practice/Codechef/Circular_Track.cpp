#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int gcd(int a, int b){
    return b ? gcd(b,a%b) : a;
}
int lcm(int a, int b){
    return a/gcd(a,b) * b;
}
void solve(){
    ll a,b,m;
    cin >> a >> b >> m;
    ll cnt1=0;
    ll cnt2=0;
    ll cnt3=0;
    cnt3 = abs(m-a+b);
    cnt1 = abs(m-b+a);
    cnt2 = abs(b-a);
    cnt1 = min(cnt1,cnt2);
    cnt1 = min(cnt1,cnt3);
    cout << cnt1%m << "\n";
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