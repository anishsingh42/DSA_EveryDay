#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int i=0,j=1;
    string output="";
    while(i<n){
        output.push_back(str[i]);
        j++;
        i += j;
    }
    cout << output << "\n";
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