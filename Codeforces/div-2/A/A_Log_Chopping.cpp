#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    return b ? gcd(b,a%b) : a;
}
int lcm(int a, int b){
    return a/gcd(a,b) * b;
}
void solve(){
    int n;
    cin >> n;
    int logs[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin >> logs[i];
        sum += logs[i];
    }
    sum -= n;
    if(sum%2 == 0){
        cout << "maomao90" << '\n';
    }
    else{
        cout << "errorgorn" << '\n';
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