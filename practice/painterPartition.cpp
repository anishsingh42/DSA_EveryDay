//Date: 1st Jan 2022
// https://practice.geeksforgeeks.org/problems/the-painters-partition-problem1535/1

#include <bits/stdc++.h>
using namespace std;

//ispossible
bool ispossible(int a[], int n, int k, int mid)
{
    long long painterCount = 1;
    long long boardsLenSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (boardsLenSum + a[i] <= mid)
        {
            boardsLenSum += a[i];
        }
        else
        {
            painterCount++;
            if (painterCount > k || a[i] > mid)
            {
                return false;
            }
            //partition
            boardsLenSum = a[i];
        }
    }
    return true;
}

long long minTime(int a[], int n, int k)
{
    // code here
    long long minTime;

    //start and end
    long long start = 0;
    long long end = 0;
    for (int i = 0; i < n; i++)
    {
        end += a[i];
    }

    long long mid = 0;
    while (start <= end)
    {
        mid = start + ((end - start) / 2);

        if (!ispossible(a, n, k, mid))
        {
            start = mid + 1;
        }
        else
        {
            minTime = mid;
            end = mid - 1;
        }
    }
    // return minimum time
    return minTime;
}

int main()
{
    cout << "Enter the number of painting Logs: ";
    int n;
    cin >> n;
    int a[100];
    cout << endl << "Enter the length of the painting Logs: ";
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cout << endl << "Enter the number of the painters: " ;
    int m;
    cin >> m;
    cout << minTime(a,n,m);
    return 0;
}