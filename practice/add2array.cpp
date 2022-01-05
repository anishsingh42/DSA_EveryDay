#include <bits/stdc++.h>
using namespace std;

vector<int> reversearr(vector<int> &ans)
{
    int start = 0;
    int end = ans.size() - 1;

    while (start <= end)
    {
        swap(ans[start], ans[end]);
        start++;
        end--;
    }
}

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    // Write your code here.
    int i = n - 1;
    int j = m - 1;

    vector<int> ans;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);
    }

    //case 1

    while (i >= 0)
    {
        int val1 = a[i];
        int sum = val1 + carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);
    }

    //case 2
    while (j >= 0)
    {
        int val2 = b[j];
        int sum = val2 + carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);
    }

    //case 3
    while (carry != 0)
    {
        int sum = carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);
    }

    //ans is in reverse
    reversearr(ans);
    return ans;
}
int main()
{

    return 0;
}