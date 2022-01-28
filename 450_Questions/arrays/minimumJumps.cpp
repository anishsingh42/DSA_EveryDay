#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
{
    // Your code here
    int jumps = 0;
    int steps = 0;
    int currend = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {

        steps = max(steps, i + arr[i]);
        if (i == currend)
        {
            jumps++;
            currend = steps;
        }

        if (currend >= n - 1)
            break;
    }
    if (currend < n - 1)
        return -1;
    return jumps;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        cout << minJumps(arr, n) << endl;
    }
    return 0;
}