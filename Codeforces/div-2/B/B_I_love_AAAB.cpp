#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    return b ? gcd(b,a%b) : a;
}
int lcm(int a, int b){
    return a/gcd(a,b) * b;
}
void solve(){
    string s2;
    cin >> s2;
    int n = s2.size();
    if(n==1)
    {
        cout << "NO" << '\n';
        return;
    }
    int flg = 0;
    int cnt=1; // couse s2[0] == 'A' hence cnt = 1;
    if(s2[0] != 'A')
    {
        cout << "NO" << '\n';
        return;
    }
    if(s2[n-1] != 'B'){
        cout << "NO" << '\n';
        return;
    }
    for(int i=1;i<n;i++){
        if(s2[i] == 'B')
        {
            cnt--;
        }
        else{
            cnt++;
        }
        if(cnt < 0)
        {
            flg = 1;
            break;
        }
    }
    if(flg){
        cout << "NO" << '\n';
    }
    else{
        cout << "YES" << '\n';
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