#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    //find out the if MSB === 1 exists
    int j=1;
    while(j*2 < n){
        j<<=1; // j = j * 2;
    }
    for(int i=n-1;i>=j;i--){
        cout << i << " ";
    }
    for(int i=0;i<j;i++){
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}