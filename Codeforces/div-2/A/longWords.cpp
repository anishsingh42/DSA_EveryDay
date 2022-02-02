#include<bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    cin >> str;
    if(str.size() <= 10){
        cout << str << endl;
        return;
    }
    else{
        string abb="";
        abb+=str[0];
        abb+=to_string(str.size()-2);
        abb+=str[str.size()-1];
        cout << abb << endl;
        return;
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