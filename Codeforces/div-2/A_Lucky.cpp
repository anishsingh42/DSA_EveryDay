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
    long long int sumf = 0;
    long long int sumb = 0;
    for(int i=0;i<3;i++){
        sumf += str[i] -'0';
        // sumb += str[i] -'0';
    }
    for(long long int j=3; j<6;j++){
        sumb += str[j] -'0';
    }
    // cout << sumf << " " << sumb << '\n';
    if(sumf == sumb)
        cout << "YES" << '\n';
    else 
        cout << "NO" << '\n';
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