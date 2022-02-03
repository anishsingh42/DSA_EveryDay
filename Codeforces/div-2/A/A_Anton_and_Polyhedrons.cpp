#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    // vector<string> s;
    int ans=0;
    for(int i=0;i<n;i++){
        string str;
        cin >> str;
        if(str == "Tetrahedron")
            ans += 4;
        else if(str == "Cube")
            ans += 6;
        else if(str == "Octahedron")
            ans += 8;
        else if(str == "Dodecahedron")
            ans += 12;
        else    
            ans += 20;
    }
    cout << ans;
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