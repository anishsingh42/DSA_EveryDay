#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int start, int end)
{
    /**Steps of partition
     * Choose a pivot Element
     * count = Count the number of elements less than or equal to pivot Element
     * Place the pivot Element to the right(correct) position = start+count
     * Make sure that all the elements to the right are greater than pivot Element and all elements to the left are less than or equal to pivot Element
     * Make use of two pointer to acheieve above 
    */
    //assume any element to be pivot element
    /*
    int pivot = arr[start];
    int count=0;
    for(int i=start;i<end;i++)
    {
        if(arr[i] <= pivot)
            count++;
    }
    int pivotIndex = start+count;
    swap(arr[pivotIndex], arr[start]);

    int i=start,j=end;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot)
            i++;
        while(arr[j] > pivot)
            j--;
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    */
    int pivot = arr[end];
    int pivotIndex = start;
    for (int i = start; i < end; i++)
    {
        if (arr[i] <= pivot)
        {
            //all left elements are less than or equal to pivot
            swap(arr[i], arr[pivotIndex]);
            //increment pivotIndex
            pivotIndex++;
        }
    }
    //actual position of pivot
    swap(arr[pivotIndex], arr[end]);
    return pivotIndex;
}
void quickSort(int arr[], int start, int end)
{
    //base case
    /**
     * No elements === sorted
     * Single elements === sorted
     * Start >= end index return 
    */

    if (start >= end)
        return;

    //partition of the array will return us an index where the pivot element exists
    int pIndex = partition(arr, start, end);

    //recursive call to solve the rest
    /**
     * Sort the left part  ===> (arr, start, pIndex-1);
     * Sort the right part ===> (arr, pIndex+1, end);
    */
    quickSort(arr, start, pIndex - 1);
    quickSort(arr, pIndex + 1, end);
}
/**Complexity
 * Time Complexity: Avg Case - O(nlogn), Best Case - O(nlogn), Worst Case - O(n^2)
 * Space Complexity: O(n)
 * Quick Sort is an Inplace Algo == Yes
 * Quick Sort is not stable Algo
*/
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    if (n > 100)
        cout << "Out of Bound , Size of Array greater than 100" << endl;
    int a[100];
    cout << "Enter the Elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Elements are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    quickSort(a, 0, n - 1);
    cout << "\nElements after sort are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}