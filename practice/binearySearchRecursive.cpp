#include <bits/stdc++.h>
using namespace std;

bool binearySearch(int arr[], int start, int end, int key)
{
    int mid = start + ((end-start)/2);
    //base case
    if(start > end)
        return false;
    if(arr[mid] == key)
        return true;
    
    if(arr[mid] > key)
        return binearySearch(arr,start,mid-1,key);
    else
        return binearySearch(arr,mid+1,end,key);
}

int main()
{
    cout << "Size of array: ";
    int n;
    cin >> n;
    int *arr = new int[n];
    cout << "Array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Key: ";
    int key;
    cin >> key;
    if (binearySearch(arr, 0, n, key))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}