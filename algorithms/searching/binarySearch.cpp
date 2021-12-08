#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int key)
{
    int mid;
    while(start<=end)
    {
        //by writing mid = start + (end-start)/2 makes sure that mid always stays with INT_MIN,INT_MAX range.
        //example lets say start and end near INT_MAX (let say = (2^31)-k ; where k is constant >= 1) then adding mid = ((2^31)-k + (2^31)-k)/2 will cross the range
        mid = start + ((end-start)/2);
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            start = mid+1;
        else
            end = mid-1;
    }
    return -1;
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

    int key;
    cout << "Enter the key "; 
    cin >> key;

    cout << "The index is: " << binarySearch(arrInt , 0 , size-1 , key);

    return 0;
}