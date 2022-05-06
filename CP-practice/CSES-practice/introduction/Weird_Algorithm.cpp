#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    return b ? gcd(b,a%b) : a;
}
int lcm(int a, int b){
    return a/gcd(a,b) * b;
}
void solve(){
    long long int n;
    cin >> n;
    while(n!=1){
        cout << n << ' ';
        if(n&1){
            n = 3*n + 1;
        }
        else{
            n >>= 1;
        }
    }
    if(n==1)
    {
        cout << n << '\n';
    }
    return;
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