#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=1;i<=n;i++){
        arr.push_back(i);
    }
    cout << 2 << "\n";
    int a;
    int b;
    int r;
    a = arr[arr.size()-3];
    b = arr[arr.size()-1];
    cout << a << " " << b << "\n";
    r = ceil((a+b)/2);
    arr.pop_back();
    arr[arr.size()-2] = r;
    while(arr.size()>2){
        a = arr[arr.size()-2];
        b = arr[arr.size()-1];
        cout << a << " " << b << "\n";
        r = ceil((a+b)/2);
        arr.pop_back();
        arr[arr.size()-1]=r;
    }
    a = arr[arr.size()-1];
    b = arr[arr.size()-2];
    cout << a << " " << b << "\n";
    r = r = ceil((a+b)/2);
    arr.pop_back();
    arr[arr.size()-1]=r;
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