#include<bits/stdc++.h>
using namespace std;
int amin(int a, int b, int c){
    if(a<b && a<c)
        return a;
    else if(b<a && b<c)
        return b;
    else 
        return c;
}
void solve(){
    int n, k, l, c, d, p, nl, np;
    /**
     * n = friends
     * k = bottles of soft drink
     * l = ml of drink in each bottle
     * c = no of limes
     * d = no of slices of each lime
     * p = gm of salt
     * nl = amt of drink required to make toast
     * 1 slice of lime used to make toast
     * np = grams of salt to make one toast
    */
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drinkToast = (k*l)/nl;
    int limeToast = c*d;
    int saltToast = p/np;
    int minToast = amin(drinkToast,limeToast,saltToast);
    cout << minToast/n << "\n";
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