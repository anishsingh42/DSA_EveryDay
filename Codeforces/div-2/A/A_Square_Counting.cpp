#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    unsigned long long s;
    cin >> n >> s;
    int cnt = 0;
    if(n!=0)
        cnt = s/(n*n);
    else 
        cnt=0;
    cout << cnt << endl;
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