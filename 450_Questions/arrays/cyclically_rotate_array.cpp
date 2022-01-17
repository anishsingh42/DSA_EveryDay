#include <bits/stdc++.h>
using namespace std;
//rotate once
void rotateArrayOnce(int a[], int n)
{
    //store the last element
    int lastElement = a[n - 1];
    //start the loop from n-2 and copy the ith element in i+1th position
    for (int i = n - 2; i >= 0; i--)
    {
        a[i + 1] = a[i];
    }
    //put the last element stored at the first position
    a[0] = lastElement;
}
//rotate the array by k times
void rotateArray(int a[], int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        rotateArrayOnce(a, n);
    }
}

int main()
{
    int n;
    cin >> n;
    if (n > 100)
        cout << "Out of Bound " << endl;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;
    rotateArray(a, n, k);
    for(int j=0;j<n;j++)
    {
        cout << a[j] << " ";
    }
    return 0;
}