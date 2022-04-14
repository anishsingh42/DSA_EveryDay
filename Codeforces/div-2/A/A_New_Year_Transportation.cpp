#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    int t;
    cin >> n >> t;
    int arr[n] = {0};
    for(int i=1;i<n;i++){
        cin >> arr[i];
    }

    int i=1;
    while(i <= n){
        if(i==t){
            cout << "YES" << '\n';
            break;
        }
        else if(i>t){
            cout << "NO" << '\n';
            break;
        }
        else{
            i += arr[i];
        }
    }
}
int main()
{
    // int tt;
    // cin >> tt;
    // while(tt--){
        
    // }
    solve();
    return 0;
}