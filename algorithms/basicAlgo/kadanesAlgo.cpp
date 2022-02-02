#include <bits/stdc++.h>
using namespace std;

// arr: input array
// n: size of array
//Function to find the sum of contiguous subarray with maximum sum.
//kadanesAlgo() === maxSubarraySum()
int maxSubarraySum(int a[], int n)
{

    // Your code here
    int currsum = a[0];
    int maxsum = a[0];
    for (int i = 1; i < n; i++)
    {
        currsum = max(a[i], currsum + a[i]);
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
}

long long kadanesAlgo(int a[], int n)
{
    long long max_so_far = INT_MIN;
    long long max_ending = 0;
    for (int i = 0; i < n; i++)
    {
        max_ending += a[i];

        if (max_so_far < max_ending)
            max_so_far = max_ending;

        if (max_ending < 0)
            max_ending = 0;
    }
    return max_so_far;
}

// { Driver Code Starts.

int main()
{
    int t, n;

    cin >> t;   //input testcases
    while (t--) //while testcases exist
    {

        cin >> n; //input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; //inputting elements of array

        cout << "MaxSubArraySum: " << maxSubarraySum(a, n) << endl;
        cout << "Kadanes Algo: " << kadanesAlgo(a, n) << endl;
    }
}