//Date: 8th Dec 2021
/*
    Given an array of integers nums sorted in non-decreasing order, find the total number of occurrence of an element in an array.

    If target is not found in the array, return [-1, -1].

    You must write an algorithm with O(log n) runtime complexity.
*/

#include<bits/stdc++.h>
using namespace std;


int elementTotalOcc(vector<int> &nums, int target)
{
    int start = 0;
    int size = nums.size();
    int end = size-1;
    int mid;

    int firstOcc = -1;
    int lastOcc = -1;

    //first find the leftmost index in the leftmost side of the array
    while(start <= end)
    {
        mid = start + ((end-start)/2);

        if(nums[mid] == target)
        {
            firstOcc = mid;
            //keep on searching the leftmost part to find whether there exist any other elment==target whos has lower index
            end = mid-1;
        }
        else if(nums[mid] < target)
            start = mid+1;
        else
            end = mid-1;
    }

    start = 0;
    end = size-1;
    mid=INT_MIN;
    //second find the rightmost index in the rightmost side of the array
    while(start <= end)
    {
        mid = start + ((end-start)/2);

        if(nums[mid] == target)
        {
            lastOcc = mid;
            //keep on searching the rightmost part to find whether there exist any other elment==target whos has higher index
            start = mid+1;
        }
        else if(nums[mid] < target)
            start = mid+1;
        else
            end = mid-1;
    }
    int totalOcc = (lastOcc-firstOcc)+1;

    return totalOcc;
}


int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

   vector<int> nums;
    cout << "Enter the elements: ";
    for(int i=0;i<size;i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    cout << "The array is: " << endl;
    
    for(auto it:nums)
    {
        cout << it << " ";
    }
    cout << endl;

    int key;
    cout << "Enter the key "; 
    cin >> key;

    cout << "The Total number of Occurrences are: " << elementTotalOcc(nums , key) << endl;
    return 0;

}