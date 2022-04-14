#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a,b,c,f,s;
    cin >> a >> b >> c;
    if(a<c)
        cout << 1 << " ";
    else 
        cout << -1 << " ";

    if(b*a > c)
        cout << b << " ";
    else 
        cout << -1 << " ";

cout << '\n';
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