#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    char arr[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int cnt=0;
    int i=0,j=m-1;
    while(i<n && j==m-1){
        if(arr[i][j] == 'R')
            cnt++;
        i++;
    }
    i=n-1;j=0;
    while(j<m && i==n-1){
        if(arr[i][j] == 'D')
            cnt++;
        j++;
    }
    cout << cnt << "\n";
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