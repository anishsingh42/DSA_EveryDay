//Date: 8th Dec 2021
/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
*/

#include<bits/stdc++.h>
using namespace std;


void intersection(vector<int> &nums1 ,vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(),nums2.end());
    vector<int> intersection;
    int n = nums1.size();
    int m = nums2.size();

    int i=0;
    int j=0;
        
    while(i<n && j<m)
    {
        if(nums1[i] == nums2[j])
        {
            if(find(intersection.begin(),intersection.end(),nums1[i]) == intersection.end())
            {
                intersection.push_back(nums1[i]);
            }
            i++;j++;
        }
        else if(nums1[i] < nums2[j])
            i++;
        else
            j++;
    }
    
    cout << "Intersection : ";
    for(auto it:intersection)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{ 
    int n;
    int m;
    cout << "Enter n and m:";
    cin >> n >> m;
    vector<int> nums1;
    vector<int> nums2;
    cout << "Enter nums1 elements"<<endl;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        nums1.push_back(temp);
    }
    cout << "Enter nums2 elements"<<endl;
    for(int i=0;i<m;i++)
    {
        int temp;
        cin >> temp;
        nums2.push_back(temp);
    }

    intersection(nums1,nums2);
    return 0;
}