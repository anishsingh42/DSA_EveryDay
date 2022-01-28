#include <bits/stdc++.h>
using namespace std;

void solve(string digits, int index, vector<string> &ans, string output, string map[])
{

    //base case
    //index/pointer overflows the digitsString
    if (index >= digits.size())
    {
        if (output == "")
            return;
        ans.push_back(output);
        return;
    }

    //processing and recursive call
    //find the number present in the digits string
    int number = digits[index] - '0';
    string s = map[number];

    for (int i = 0; i < s.size(); i++)
    {
        //add the mapped string s ith element to output string
        output.push_back(s[i]);
        //recursive call and add the second mapped string(if any) to the output and so on...
        solve(digits, index + 1, ans, output, map);
        //after adding ouput to the ans make output back to " ";
        output.pop_back();
    }
}
vector<string> letterCombinations(string digits)
{
    vector<string> ans;
    string output = "";
    int index = 0;
    string map[10] = {
        "",
        "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"};

    solve(digits, index, ans, output, map);
    return ans;
}

int main()
{
    string str;
    cout << "Input String : ";
    cin >> str;
    vector<string> answer = letterCombinations(str);
    for(auto it: answer){
        cout << it <<" ";
    }
    return 0;
}