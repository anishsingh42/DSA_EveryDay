//date: 3rd Jan 2022
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
        }
    }

    cout << endl << "After moving zero to the right "<<endl;
    for(int k=0;k<nums.size();k++)
    {
        cout << nums[k] << " ";
    }
}

int main()
{
    int n; cin >> n;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    moveZeroes(arr);
    return 0;
}