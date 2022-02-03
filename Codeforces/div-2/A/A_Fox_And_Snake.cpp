#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    int m;
    cin >> n >> m;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(!(i&1)){
            for(int j=0;j<m;j++){
                cout << "#";
            }
        }
        else{
            if(cnt==0){
                for(int j=0;j<m-1;j++){
                    cout << ".";
                }
                cout << "#";
                cnt++;
            }
            else{
                cout <<"#";
                for(int j=1;j<m;j++){
                    cout <<".";
                }
                cnt=0;
            }
        }
        cout << "\n";
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