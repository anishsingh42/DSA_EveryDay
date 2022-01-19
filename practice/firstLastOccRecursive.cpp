#include <bits/stdc++.h>
using namespace std;

int leftPart(vector<int> &arr, int start, int end, int key, int firstOcc)
{
    int mid = start + ((end - start) / 2);
    //base case
    if (start > end)
        return firstOcc;
    if (arr[mid] == key)
    {
        firstOcc = mid;
        return leftPart(arr, start, mid - 1, key, firstOcc);
    }
    //proccessing recusive call
    else if (arr[mid] < key)
        return leftPart(arr, mid + 1, end, key, firstOcc);
    else
        return leftPart(arr, start, mid - 1, key, firstOcc);
    //return firstOcc
    return firstOcc;
}
int rightPart(vector<int> &arr, int start, int end, int key, int lastOcc)
{
    int mid = start + ((end - start) / 2);

    //base case
    if (start > end)
        return lastOcc;
    if (arr[mid] == key)
    {
        lastOcc = mid;
        return rightPart(arr, mid + 1, end, key, lastOcc);
    }
    //proccessing recursive call
    else if (arr[mid] < key)
        return rightPart(arr, mid + 1, end, key, lastOcc);
    else
        return rightPart(arr, start, mid - 1, key, lastOcc);
    //return lastOcc
    return lastOcc;
}
void searchRange(vector<int> &arr, int target)
{
    int size = arr.size();
    int firstIndex = leftPart(arr, 0, size - 1, target, -1);
    int lastIndex = rightPart(arr, 0, size - 1, target, -1);
    vector<int> index;
    index.push_back(firstIndex);
    index.push_back(lastIndex);

    for (auto i : index)
    {
        cout << i << " ";
    }
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

    int key;
    cout << "Enter the key ";
    cin >> key;

    cout << "The first and last Occurrence are: ";
    searchRange(nums, key);
    return 0;
}