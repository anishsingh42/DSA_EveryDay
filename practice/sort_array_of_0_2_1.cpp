//Date: 15 Sept 2021

#include<bits/stdc++.h>
using namespace std;

int sort012(int a[],int n)
{
    int mid = 0;
    int low = 0;
    int high = (n-1);
    while(mid<=high)
    {
        //if pointing to 0
        switch(a[mid])
        {
        case 0:
            swap(a[low],a[mid]);
            low++; mid++;
            break;
        //if pointing to 1
        case 1:
            mid++;
            break;
        //if poiting to 2
        case 2:
            swap(a[high],a[mid]);
            high--;
            break;
        }
    }
}

int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort012(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}