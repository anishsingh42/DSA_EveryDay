#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[],int n)
{
    int j; int key;
    for(int i=1;i<n;i++)
    {
        //keep comparing a[i] that is key with all the other elements 
        key = a[i];
        j=i-1;
        while(j>=0 && a[j] > key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1] = key;
    }
}
void getArrayValues(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
}

void setArrayValues(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cin >> arr[i];
}


int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    if(size > 100) 
        cout << "Enter the size less than 100" << endl;


    int arrInt[100];

    setArrayValues(arrInt, size);
    cout << "The array is: " << endl;
    getArrayValues(arrInt, size);
    cout << endl;
    cout << "After Sorting"<<endl;
    insertionSort(arrInt,size);
    getArrayValues(arrInt,size);
    return 0;
}