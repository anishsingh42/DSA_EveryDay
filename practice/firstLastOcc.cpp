//Date: 8th Dec 2021
/*
    Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

    If target is not found in the array, return [-1, -1].

    You must write an algorithm with O(log n) runtime complexity.
*/

#include<bits/stdc++.h>
using namespace std;


void firstLastOcc(vector<int> &nums, int target)
{
    int start = 0;
    int size = nums.size();
    int end = size-1;
    int mid;

    vector<int> index;

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

    index.push_back(firstOcc);
    index.push_back(lastOcc);


    for(auto it:index)
        cout << it << " ";

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

    cout << "The first and last Occurrence are: "; firstLastOcc(nums , key);
    return 0;

}