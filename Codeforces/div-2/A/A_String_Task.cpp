#include<bits/stdc++.h>
using namespace std;
void solve(){
    string str;
    cin >> str;
    string output = "";
    for(int i=0;i<str.size();i++){
        if((str[i] == 'A' || str[i] == 'a')  || (str[i] == 'E' || str[i] == 'e') || (str[i] == 'O' || str[i] == 'o') || (str[i] == 'Y' || str[i] == 'y') || (str[i] == 'U' || str[i] == 'u') || (str[i] == 'I' || str[i] == 'i')){
            continue;
        }
        else{
            if(str[i] >= 'A' && str[i] <= 'Z'){
                output.push_back('.');
                output.push_back(str[i] - ('A' - 'a'));
            }
            else{
                output.push_back('.');
                output.push_back(str[i]);
            }
        }
    }
    cout << output << "\n";
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