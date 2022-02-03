#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll x;
    cin >> x;
    ll temp=x;
    vector<ll> num;
    while(temp>0){
        ll ld=temp%10;
        num.push_back(ld);
        temp/=10;
    }
    ll minNumber=0;
    for(ll i=num.size()-1;i>=0;--i){
        if((num[i]>4 && num[i]!=9) || (num[i]==9 && i!=num.size()-1)){
            minNumber=minNumber*10 + 9-num[i];
        }
        
        else
            minNumber=minNumber*10 + num[i];
    }
    cout << minNumber << endl;
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