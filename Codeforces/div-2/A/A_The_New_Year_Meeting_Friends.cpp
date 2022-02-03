#include<bits/stdc++.h>
using namespace std;
int amin(int a, int b, int c){
    if(a<b && a<c)
        return a;
    else if(b<c && b<a) 
        return b;
    else 
        return c;
}
int amax(int a, int b, int c){
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else 
        return c;
}
void solve(){   
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int minimumDistance = amax(x1,x2,x3) - amin(x1,x2,x3);
    cout << minimumDistance << "\n";
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