#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int days[7];
    for(int i=0;i<7;i++){
        cin >> days[i];
    }
    int sum = 0;
    int index=0;
    while(sum < n){
        sum += days[index%7];
        index++;
        // cout << index << " " << sum << "\n";
    }
    if(index%7 == 0)
        cout << 7 << '\n';
    else 
        cout << index%7 << '\n';
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