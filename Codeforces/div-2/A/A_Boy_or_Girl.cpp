#include<bits/stdc++.h>
using namespace std;
void solve(){
    string str;
    cin >> str;
    vector <char> distinct;
    for(int i=0;i<str.size();i++){
        if(find(distinct.begin(), distinct.end(), str[i]) == distinct.end())
        {
            distinct.push_back(str[i]);
        }
    } 
    // for(auto i:distinct)
    //     cout << i << " ";
    if(distinct.size()%2 == 0)
        cout << "CHAT WITH HER!" << "\n";
    else
        cout << "IGNORE HIM!" << "\n";
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