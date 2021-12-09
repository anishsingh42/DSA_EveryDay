//Date: 9th Dec 2021

/*
    Let's call an array arr a mountain if the following properties hold:

    arr.length >= 3
    There exists some i with 0 < i < arr.length - 1 such that:
        arr[0] < arr[1] < ... arr[i-1] < arr[i]
        arr[i] > arr[i+1] > ... > arr[arr.length - 1]

Given an integer array arr that is guaranteed to be a mountain, return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].
*/


#include<bits/stdc++.h>
using namespace std;


int peakMountain(vector<int> arr, int size)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid;

    while(start < end)
    {
        mid = start + ((end - start)/2);

        //mid is in the ascending half
        if(arr[mid] < arr[mid+1])
            start = mid+1;

        //else mid is the peak or mid in descending half
        else    
            end = mid;
    }
    return end;
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
    cout << "The peak of the mountain is : " << peakMountain(arrInt, n) << endl;

    return 0;
}