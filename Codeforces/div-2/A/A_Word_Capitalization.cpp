#include<bits/stdc++.h>
using namespace std;
void solve(){
    string str;
    cin >> str;
    if(str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] + ('A'-'a');
    cout << str;
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