#include <bits/stdc++.h>
using namespace std;
int partition(int a[], int s, int e)
{
    int pivot = a[e];
    int partitionIndex = s;
    for(int i=s;i<e;i++)
    {
        if(a[i] <= pivot)
        {
            swap(a[i],a[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(a[partitionIndex],a[e]);
    return partitionIndex;
}
void quickSort(int a[], int start, int end)
{
    if(start<end)
    {
        int pIndex = partition(a,start,end);
        quickSort(a,start,pIndex-1);
        quickSort(a,pIndex+1,end);
    }   
}
void getArrayValues(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

void setArrayValues(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size > 100)
        cout << "Enter the size less than 100" << endl;

    int arrInt[100];

    setArrayValues(arrInt, size);
    cout << "The array is: " << endl;
    getArrayValues(arrInt, size);
    cout << endl;
    cout << "After Sorting" << endl;
    quickSort(arrInt, 0, size - 1);
    getArrayValues(arrInt, size);
    return 0;
}