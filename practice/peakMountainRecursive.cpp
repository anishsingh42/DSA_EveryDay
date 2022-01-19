#include <bits/stdc++.h>
using namespace std;

int peakElement(vector<int> &arr, int s, int e)
{
    int mid = s + ((e - s) / 2);
    //base case
    if (s == e || s > e)
        return -1;
    //proccessing
    if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        return mid;
    //recursive call
    if (arr[mid] >= arr[mid - 1])
        return peakElement(arr, mid + 1, e);
    if (arr[mid] >= arr[mid + 1])
        return peakElement(arr, s, mid);
    return -1;
}
int peakIndexInMountainArray(vector<int> &arr)
{
    int n = arr.size() - 1;
    int peak = peakElement(arr, 0, n);
    return peak;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> nums;
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    cout << "The array is: " << endl;

    for (auto it : nums)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "Peak Element Index: " <<peakIndexInMountainArray(nums);
    return 0;
}