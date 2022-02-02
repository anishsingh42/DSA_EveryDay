#include <bits/stdc++.h>
using namespace std;

void solve(string str, vector<string> &ans, int index)
{

    //base case
    if (index >= str.size())
    {
        ans.push_back(str);
        return;
    }
    //processing
    for (int i = index; i < str.size(); i++)
    {
        //logic
        swap(str[index], str[i]);
        //recursive
        solve(str,ans,index+1);
        //backtrack
        swap(str[index], str[i]);
    }
}
vector<string> permutationString(string str)
{
    vector<string> ans;

    int index = 0;
    solve(str, ans, index);
    sort(ans.begin(), ans.end());

    return ans;
}

int main()
{
    string str = "abc";
    vector<string> permutations;
    permutations = permutationString(str);
    for (auto i : permutations)
    {
        cout << i << " ";
    }
    return 0;
}