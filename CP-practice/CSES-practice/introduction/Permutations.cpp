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
    if(n <= 3 && n!= 1){
        cout << "NO SOLUTION" << '\n';
    }
    else if(n==1){
        cout << n << '\n';
    }
    else{
        
        long long int temp = 1;
        while(temp < n){
            cout << (n-temp) << " ";
            temp += 2;
        }
        cout << n << " ";
        temp = 2;
        while(temp < n){
            cout << (n-temp) << " ";
            temp += 2;
        }
    }
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