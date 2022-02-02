#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll solve(int n){
    ll ans;
    if(n%7==0)
        return n;

    //remove the last element from number "N"
    n-=(n%10);
    for(int i=n; i<n+10; i++){
        if(i%7==0 && i%10!=0){
            ans=i;
            break;
        }
    }
    return ans;
}
int main()
{
    int tt;
    cin >> tt;
    while(tt--){
        ll n;
        cin >> n;
        ll ans = solve(n);
        cout << ans << endl;
    }
    return 0;
}
