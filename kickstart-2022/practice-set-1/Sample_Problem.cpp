#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,m;
    cin >> n >> m;
    vector<int> candies;
    int sum = 0;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        sum += temp;
        candies.push_back(temp);
    }
    int rem = sum%m;
    return rem;
}
int main(){
    int tt;
    cin >> tt;
    int index = 1;
    while(tt--){
        cout << "Case #" << index << ": " << solve() << '\n';
        ++index;
    }
    return 0;
}