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
    long long int sum = 0;
    long long int actualSum = 0; int x;

    for(int i=0;i<n-1;i++){
        actualSum += i+1;
        cin >> x;
        sum += x;
    }
    actualSum += n;
    // cout << actualSum << " " << sum;
    actualSum -= sum;
    cout << actualSum << '\n';
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