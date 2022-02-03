#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int x=0;
    for(int i=0;i<n;i++){
        string str;
        cin >> str;
        if(str[0] == '+')
            ++x;
        else if(str[2] == '+')
            x++;
        else if(str[0] == '-')
            --x;
        else
            x--;
    }
    cout << x <<endl;
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