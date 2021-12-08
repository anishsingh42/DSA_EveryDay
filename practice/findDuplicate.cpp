//Date: 7th Dec 2021

#include<bits/stdc++.h>
using namespace std;


/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.
*/


int findDuplicate(int arr[], int size)
{
    sort(arr,arr+size);
    int ans=0;
    for(int i=1;i<size;i++)
    {
        if(arr[i-1]==arr[i])
            ans = arr[i];
    }
    return ans;

    //T.C = O(nlogn) + O(n) = O(nlogn)
}


void getArrayValues(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
}

void setArrayValues(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cin >> arr[i];
}
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    if(size > 100) 
        cout << "Enter the size less than 100" << endl;


    int arrInt[100];

    setArrayValues(arrInt, size);
    cout << "The array is: " << endl;
    getArrayValues(arrInt, size);
    cout << endl;
    cout << "The answer is: " << findDuplicate(arrInt, size) << endl;
    return 0;
}