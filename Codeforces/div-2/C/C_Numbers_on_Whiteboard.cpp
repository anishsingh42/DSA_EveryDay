#include<bits/stdc++.h>
using namespace std;
#define mod 100000
void solve(){
    int n;
    cin >> n;
    cout << 2 << "\n";
    int i = n;
    int r = n;
    cout << r << " " << --i << "\n";
    while(r != 2 && i>1){
        cout << r << " " << i-1 << "\n";
        r--;
        i--; 
    }
}
int main()
{
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}