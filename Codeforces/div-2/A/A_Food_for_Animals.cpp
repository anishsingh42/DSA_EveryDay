#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    return b ? gcd(b,a%b) : a;
}
int lcm(int a, int b){
    return a/gcd(a,b) * b;
}
void solve(){
    long long int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    bool flg = true;
    bool track = true;
    if(c+a >= x){
        if(a < x){
            if(c+a-x+b-y >= 0){
                track = false;
            }
        }
        else if(c+b-y >= 0){
                track = false;
        }
    }
    
    // cout << a << b << c << x << y << '\n';
    if(track){
        cout << "NO" << '\n';
    }
    else{
        cout << "YES" << '\n';
    }
}
void main()
{
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    // return;
}