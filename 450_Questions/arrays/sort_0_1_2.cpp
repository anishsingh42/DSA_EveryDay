#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n)
{
    //three pointer 
    //assume mid is pointing towards 1
    //low is pointing towards 0
    //high is pointing towards 2
    int mid =0;
    int low=0;
    int high=n-1;
    //the incrementing element in mid so make sure mid doesn't exceeds high
    while(mid<=high)
    {
        switch (arr[mid])
        {
        //pointing towards 0
        case 0:
            swap(arr[low] , arr[mid]);
            low++;
            mid++;
            break;
        //pointing towards 1
        case 1:
            mid++;
            break;
        //pointing towrds 2
        case 2:
            swap(arr[high] , arr[mid]);
            high--;
            mid++;
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[100];
    if (n > 100)
        cout << "Out of bound. " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort012(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}