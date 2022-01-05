//Date: 1st jan 2022

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
            k--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
    while (i >= 0)
        nums1[k--] = nums1[i--];
    while (j >= 0)
        nums1[k--] = nums2[j--];

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
    merge(nums1,n,nums2,m);
    return 0;
}