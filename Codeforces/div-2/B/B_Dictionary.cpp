#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    return b ? gcd(b,a%b) : a;
}
int lcm(int a, int b){
    return a/gcd(a,b) * b;
}
void solve(){
    string str;
    cin >> str;
    int ans = 25*(str[0] - 'a') + (str[1] - 'a') + 1;
    if(str[0] < str[1]){
        ans -= 1;
    }
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