#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> response;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        if(t == 1){
            cout << "HARD" << "\n";
            response.push_back(t);
            break;
        }
        else
            response.push_back(t);
    }
    if(find(response.begin(), response.end(), 1) == response.end())
    {
        cout << "EASY" << "\n";
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