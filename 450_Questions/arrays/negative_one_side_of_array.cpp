#include <bits/stdc++.h>
using namespace std;

void negativeToLeft(int arr[], int n)
{
    //low is pointer pointing towards negative elements
    int low = 0;
    //high is a pointer pointing towards >= 0 elements
    int high = n-1;

    while(low <= high)
    {
        //if arr[low] && arr[high] < 0
        if(arr[low] < 0 && arr[high] < 0)
            low++;
        //if arr[low] >= 0 and arr[high] >= 0
        else if(arr[low] >= 0 && arr[high] >= 0)
            high--;
        //low is positive and high negative
        else if(arr[low] >= 0 && arr[high] < 0)
        {
            swap(arr[low] , arr[high]);
            low++;
            high--;
        } 
        //other condition
        else
        {
            low++;
            high--;
        }
            
    }
}
//T.C = O(N)
//S.C = O(1)
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
    negativeToLeft(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}