#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int n)
{
    
    int maxSum = a[0];
    int currSum = a[0];
    for (int i = 1; i < n; i++)
    {
        currSum = max(a[i], currSum + a[i]);
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Arry is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Max sum of subarray is : " << maxSubArraySum(a, n);
    return 0;
}