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
    int minimumelement = INT_MAX;
    for(long long int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i] < minimumelement)
            minimumelement = arr[i];
    }
    long long int cnt = 0;
    for(long long int i=0;i<n;i++){
        if(arr[i] != minimumelement)
        {
            cnt += arr[i]-minimumelement;
        }
    }
    cout << cnt << '\n';


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