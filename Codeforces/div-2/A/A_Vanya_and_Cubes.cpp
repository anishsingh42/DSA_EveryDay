#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int sum=0;
    int height=0;
    while(sum<=n){
        height++;
        sum = sum + (height*(height+1))/2;
    }
    cout << height-1 << "\n";
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