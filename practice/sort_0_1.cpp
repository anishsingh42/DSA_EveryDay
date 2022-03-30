//Date: 8th DEc 2021
/*
Sort 0s and 1s without using sort function
*/

#include<bits/stdc++.h>
using namespace std;

void sort01(int a[], int n)
{
    int i=0;
        int j=n-1;
        while(i<=j)
        {
            if(a[i]==0)
                i++;
            else if(a[j]==1)
                j--;
            else
                swap(a[i],a[j]);
        }
    
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