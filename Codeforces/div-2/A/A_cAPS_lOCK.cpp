#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin >> str;
    string temp = str;

    if(str[0] >= 'a' && str[0] <= 'z'){
        str[0] = str[0] - 'a' + 'A';
    }
    else if(str[0] >= 'A' && str[0] <= 'Z'){
            str[0] = str[0] - 'A' + 'a';
    }
    for(int i=1;i<str.size();i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] - 'A' + 'a';
        }
        else{
            cout << temp << '\n';
            return;

        }
    }
    cout << str << '\n';
}
int main()
{
    // int tt;
    // cin >> tt;
    // while (tt--)
    // {
    // }
    solve();

    return 0;
}