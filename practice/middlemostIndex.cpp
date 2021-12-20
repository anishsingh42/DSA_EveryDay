//Date: 9th Dec 2021

/*
    Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.
*/


#include<bits/stdc++.h>
using namespace std;


int middlemostIndex(vector<int> arr, int size)
{
    int sumArr = 0;
    int Lsum = 0;
    int Rsum = 0;

    for(auto it:arr)
        sumArr += it;

    for(int i=0;i<arr.size();i++)
    {
        //dont update Lsum if i==0 cause there might be a situation where the pivot is the index 0 where Lsum = 0 and Rsum = 0;
        if(i==0)
            Lsum = 0;
        else
            Lsum += arr[i-1];


        Rsum = sumArr - (Lsum + arr[i]);
        if(Rsum == Lsum)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arrInt;
    cout << "Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        arrInt.push_back(temp);
    }


    for(auto it:arrInt)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "The Pivot/MiddleMost index is : " << middlemostIndex(arrInt, n) << endl;

    return 0;
}