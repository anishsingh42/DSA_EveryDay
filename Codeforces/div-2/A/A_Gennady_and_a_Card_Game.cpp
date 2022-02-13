#include<bits/stdc++.h>
using namespace std;
void solve(){
    string str;
    cin >> str;
    int cnt=0;
    for(int i=0;i<5;i++){
        string hand;
        cin >> hand;
        if((hand[0] == str[0]) || (hand[1] == str[1])){
            cnt=1;
            break;
        }
        
    }
    if(cnt==1)
        cout << "YES" << "\n";
    else 
        cout << "NO" << "\n";
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