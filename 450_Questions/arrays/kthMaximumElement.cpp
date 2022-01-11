#include <bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int maxi = n - k;
    return nums[maxi];
}
//T.C = O(NlogN);

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    int k;
    cin >> k;
    cout << k << "th Maximum element in the array is " << findKthLargest(nums, k) << endl;
    return 0;
}