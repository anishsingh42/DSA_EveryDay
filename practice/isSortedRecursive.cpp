#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    //base case
    //array has only one element or no element consider to be sorted
    if (n == 0 || n == 1)
        return true;

    //processing
    //array has minimum of 2 elements
    if (arr[0] > arr[1])
        return false;
    //recursive case
    else
    {
        return isSorted(arr + 1, n - 1);
    }
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

    if (isSorted(arr, n))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}