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
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        cin >> b[i];
    }
    
    map<pair<int,int>,int> pre;
    int cnt = 0;
    for(int i=0;i<n;i++){
        cnt += pre[{a[i],b[i]}];
        pre[{b[i],a[i]}]++;
    }
    cout << cnt     << '\n';
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