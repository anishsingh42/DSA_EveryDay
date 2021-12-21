#include <bits/stdc++.h>
using namespace std;
//merge function
void Merge(int a[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;

    //create temp arrays
    int temp[right - left + 1]; //leftArray length = mid-left+1 and rightArray length = right-mid;

    while (i <= mid && j <= right)
    {
        if (a[i] > a[j])
        {
            temp[k++] = a[j++];
        }
        else
        {
            temp[k++] = a[i++];
        }
    }
    if(i>mid)
    {
        while(j<=right)
        {
            temp[k++] = a[j++];
        }
    }
    else
    {
        while(i<=mid)
        {
            temp[k++] = a[i++];
        }
    }

    for(int m=left;m<k;m++)
    {
        a[m] = temp[m];
    }
}
void mergeSort(int a[], int left, int right)
{
    //atleast 2 elements in the array
    if (left < right)
    {
        int mid = left + ((right - left) / 2);
        //sorting the left array
        mergeSort(a, left, mid);
        //sorting the right array
        mergeSort(a, mid + 1, right);
        //merging the sorted array
        Merge(a, left, mid, right);
    }
    //Time Complexcity = O(nlogn);
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
    mergeSort(arrInt, 0, size - 1);
    getArrayValues(arrInt, size);
    return 0;
}