#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int n, int key)
{
    //base case 
    if(n==0)
        return false;
    
    //processing 
    if(arr[0] == key)   
        return true;
    
    //recursive call
    else{
        return linearSearch(arr+1,n-1,key);
    }
}

int main()
{
    cout << "Size of array: ";
    int n;
    cin >> n;
    int *arr = new int[n];
    cout << "Array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Key: ";
    int key;
    cin >> key;
    if (linearSearch(arr, n, key))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}