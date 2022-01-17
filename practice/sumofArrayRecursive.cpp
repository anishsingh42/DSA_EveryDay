#include <bits/stdc++.h>
using namespace std;

int sum=0;
int sumOfArray(int arr[], int n)
{
    //base case
    if(n==0)
        return 0;
    else if(n==1){
        sum += arr[0];
        return sum;
    }

    //processing 
    sum += arr[0] + arr[1];

    //recursive call
    sumOfArray(arr+2,n-2);
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Sum of array using recursive call : " << sumOfArray(arr, n);
    return 0;
}