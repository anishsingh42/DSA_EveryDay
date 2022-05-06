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
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin >> arr[i];
    }
    long long cnt = 0;
    for(long long int i=0;i<n-1;i++){
        if(arr[i] > arr[i-1]){
            cnt += abs(arr[i] - floor(arr[i+1]/2)) + 1;
            arr[i+1] = arr[i];
        }
        cout << cnt << '\n';
    }
    cout << "A: " << cnt << '\n';
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