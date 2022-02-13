#include<bits/stdc++.h>
using namespace std;
void solve(){
    string str;
    cin >> str;
    vector<char> add;

    for(int i=0;i<str.size();i++){
        if(str[i] != '+')
            add.push_back(str[i]);
    }   
    sort(add.begin(),add.end());
    for(int i=0;i<add.size();i++){
        cout << add[i];
        if(i < add.size()-1)
            cout << '+';
    }
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