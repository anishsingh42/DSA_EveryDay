#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        arr.push_back(t);
    }
    int j=0;
    while(j<n && arr[j] == j+1)
        ++j;
    
    if(j<n)
        reverse(arr.begin()+j,min_element(arr.begin()+j,arr.end())+1);
    
    for(int it:arr){
        cout << it << " ";
    }
    cout << "\n";
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