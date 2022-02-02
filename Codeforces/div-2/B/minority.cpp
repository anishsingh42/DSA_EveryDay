#include<bits/stdc++.h>
using namespace std;
int solve(string str){
    int cnt[2]={0,0};
    for(int i=0;i<str.size();i++){
        if(str[i] == '0')
            cnt[0]++;
        else    
            cnt[1]++;
    }

    int ans = min(cnt[0], cnt[1]);

    //if both cnt[0] == cnt[1]
    if(cnt[0] == cnt[1])
    {
        /*
        if(str.back() == '0')
            ans = min(cnt[0]-1, cnt[1]);
        else
            ans = min(cnt[0], cnt[1]-1);
        */
       ans--;
    }
    return ans;
}
int main()
{
    int tt;
    cin >> tt;
    while(tt--){
        string str;
        cin >> str;
        int answer = solve(str);
        cout << answer << endl;
    }
    return 0;
}