//Date: 8th Dec 2021
/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
*/

#include<bits/stdc++.h>
using namespace std;

void pairSum(vector<int> &nums , int target)
{
    vector<int> index;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
                
                
            if(nums[i] + nums[j] == target)
            {
                index.push_back(min(i,j));
                index.push_back(max(i,j));
            }
                
        }
    }
    cout << "Index: ";
    for(auto it:index)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{ 
    int n;
    
    cout << "Enter n: ";
    cin >> n;
    vector<int> nums;
    cout << "Enter nums elements"<<endl;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    int target;
    cout << "Enter the sum that you want to find: ";
    cin >> target;
    pairSum(nums,target);
    return 0;
}