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
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    long long int cnt = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            //add the diff between them
            cnt += abs(arr[i] - arr[i+1]);
            //make the smaller element equal to maintain sorting 
            arr[i+1] = arr[i];
        }
        // cout << cnt << '\n';
    }
    cout << cnt << '\n';
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