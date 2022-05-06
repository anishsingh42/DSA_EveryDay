#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    return b ? gcd(b,a%b) : a;
}
int lcm(int a, int b){
    return a/gcd(a,b) * b;
}
void solve(){
    int x;
    int y;
    cin >> x >> y;
    int a=0,b=0;
    if(y%x != 0){
        a=0;b=0;
        cout << a << " " << b << '\n';
    }
    else{
        cout << 1 << " " << floor(y/x) << '\n';
    }
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