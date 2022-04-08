#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int day[7];

    for(int i=0;i<7;i++){
        cin >> day[i];
    }
    int i=0;
    while(n>0){
        n -= day[i%7];
        i++;
    }
    if(i%7 == 0)
        cout << 7 << '\n';
    else
        cout << (i)%7 << '\n';
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