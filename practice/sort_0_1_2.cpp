//Date: 8th DEc 2021
/*
Sort 0s and 1s and 2s without using sort function
*/

#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n)
{
    //...
}


void setArrayValues(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cin >> arr[i];
}

void getArrayValues(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
}
int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;
    cout << endl;
    if(n>100)
        cout << "Enter number less than 100" << endl;
    
    int arr[100];
    setArrayValues(arr,n);

    cout << "Before sorting: "<<endl;
    getArrayValues(arr,n);

    sort01(arr,n);

    cout << endl << "After sorting" << endl;
    getArrayValues(arr,n);
    return 0;
}