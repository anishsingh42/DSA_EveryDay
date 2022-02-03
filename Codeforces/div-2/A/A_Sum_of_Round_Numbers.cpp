#include<bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> ans;

    int n;
    cin >> n;
    int rem=0;
    if(n>=10000){
        rem = n%10000;
        ans.push_back(n-rem);
        n=n%10000;
    }
    if(n>=1000 && n<10000){
        rem = n%1000;
        ans.push_back(n-rem);
        n=n%1000;
    }
    if(n>=100 && n<1000){
        rem = n%100;
        ans.push_back(n-rem);
        n=n%100;
    }
    if(n>=10 && n<100){
        rem = n%10;
        ans.push_back(n-rem);
        n=n%10;
    }
    if(n<10 && n>0){
        ans.push_back(n);
    }
    cout << ans.size() << "\n";
    for(auto it: ans){
        cout << it << " ";
    }
    cout << "\n";
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