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
    long long int q;
    cin >> q;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    while(q--){
        long long int temp;
        cin >> temp;
        if(temp >= arr[n/2]){
            for(long long int i=n/2;i<n;i++){
                
            }
        }
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