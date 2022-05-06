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
    long long int cnt = 1;
    long long int ans = 1;
    for(int i=0;i<str.size();i++){
        if(str[i] == str[i+1])
            cnt++;
        else
            cnt = 1;
        ans = max(ans,cnt);
    }
    cout << ans;
}

int main()
{
    solve();
    // int tt;
    // cin >> tt;
    // while(tt--){
        
    // }
    return 0;
}