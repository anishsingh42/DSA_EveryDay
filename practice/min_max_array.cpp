#include <bits/stdc++.h>
using namespace std;

//Method 1
void minmaxM1(int arr[], int n, int &mini, int &maxi)
{
    //Traverse the entire array once and keep comparing to find minimum and maximum
    //Time complexity on traversing is O(n)
    //Space Complexity O(1)

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
            maxi = arr[i];
        else if (arr[i] < mini)
            mini = arr[i];
    }
}

//Method 2
void minmaxM2(int arr[], int n, int &mini, int &maxi)
{
    //check if array is single element or double element cause these two can be done in O(1) Time complexity

    //single element
    if (n == 1)
    {
        mini = maxi = arr[0];
    }
    //double element
    else if (n == 2)
    {
        if (arr[0] > arr[1])
        {
            mini = arr[1];
            maxi = arr[0];
        }
        else
        {
            mini = arr[1];
            maxi = arr[0];
        }
    }
    //more than 2 element
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maxi)
                maxi = arr[i];
            else if (arr[i] < mini)
                mini = arr[i];
        }
    }
}
int main()
{
    int n;
    cout << "Size of Array : ";
    cin >> n;
    int arr[100];
    if (n > 100)
        cout << "Size is greater than 100  " << endl;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int minimum = INT_MAX;
    int maximum = INT_MIN;

    minmaxM1(arr, n, minimum, maximum);
    cout << "MAXIMUM: " << maximum << endl
         << "MINIMUM: " << minimum << endl;


    minmaxM2(arr,n,minimum,maximum);
    cout << "MAXIMUM: " << maximum << endl
         << "MINIMUM: " << minimum << endl;
    return 0;
}