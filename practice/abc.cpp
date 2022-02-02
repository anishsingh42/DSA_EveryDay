#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){

    for(int i=0,j=str.size();i<=j;i++,j--){
        if(str[i] != str[j])
        {
            return false;
        }
    }
    return true;
}

// string subString(string s1,int a,int b){
//     string sub="";
//     for(int i=a;i<b;i++){
//         sub+=s1[i];
//     }
//     return sub;
// }
bool isPossible(string s){
    if(s.size() == 1){
        return true;
    }
  

    for(int i=0;i<s.size();i++)
    {
        for(int j=i+1;j<s.size();j++){
            string substring = s.substr(i,j);
            if(!isPalindrome(substring)){
                return false;
            }
        }
    }
    return true;
} 
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s="";
        char ch;
        for(int i=0;i<n;i++){
            cin >> ch;
            s+=ch;
        }
        if(isPossible(s)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        // cout << s;
    }
    return 0;
}