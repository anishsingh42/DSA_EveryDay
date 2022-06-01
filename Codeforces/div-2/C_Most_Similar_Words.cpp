#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    return b ? gcd(b,a%b) : a;
}
int lcm(int a, int b){
    return a/gcd(a,b) * b;
}
void solve(){
    long long int n,m;
    cin >> n >> m;
    long long int temp = n;
    vector<string> str;
    while(temp--){
        string s;
        cin >> s;
        str.push_back(s);
    }
    sort(str.begin(), str.end());
    // for(string i: str){
    //     cout << i << " " << '\n';
    // }
    long long int minimum = INT_MAX;
    for(long long int i=0;i<n-1;i++){
        string a = str[i];
        string b = str[i+1];
        long long int cnt = 0;
        for(long long j=0;j<m;j++){
            cnt += b[j] - a[j];
        }
        if(cnt >= 0)
            minimum = min(minimum,cnt);
    }

    cout << minimum << '\n';
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