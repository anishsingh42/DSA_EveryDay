//date: 3rd Jan 2022
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int newIndex;
    int n = nums.size();
    vector<int> temp(n);
    for (int i = 0; i < nums.size(); i++)
    {
        newIndex = (i + k) % n;
        temp[newIndex] = nums[i];
    }
nums=temp;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int k;
    cin >> k;
    rotate(arr, k);
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}