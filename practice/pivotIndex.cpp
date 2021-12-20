//Date: 9th Dec 2021

// Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

//     [4,5,6,7,0,1,2] if it was rotated 4 times.
//     [0,1,2,4,5,6,7] if it was rotated 7 times.

// Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

// Given the sorted rotated array nums of unique elements, return the minimum element of this array.

// You must write an algorithm that runs in O(log n) time.


#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid;
    while(start < end) 
    {
        if(arr[start] < arr[end])
            return arr[start];
        else
        {
            mid = start + ((end-start)/2);
                
            if(arr[mid] >= arr[start])
                start = mid + 1;
            else 
                end = mid;
        }
    }
    return arr[start];
}


int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arrInt;
    cout << "Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        arrInt.push_back(temp);
    }


    for(auto it:arrInt)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "The minimum element is : " << pivotIndex(arrInt) << endl;
    return 0;
}


