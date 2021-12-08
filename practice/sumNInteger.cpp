//Date: 7th Dec 2021

#include<bits/stdc++.h>
using namespace std;


//iterative
int sumIntegerIterative(int arr[], int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
        sum += arr[i];

    return sum;
}
void setArrayValues(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cin >> arr[i];
}

void getArrayValues(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
}
int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;
    cout << endl;
    if(n>100)
        cout << "Enter number less than 100" << endl;
    
    int arr[100];
    setArrayValues(arr,n);
    cout << "Sum is "<< sumIntegerIterative(arr,n) << endl;
    getArrayValues(arr,n);
    return 0;
}