//Date: 9th Dec 2021

/*
    Let's call an array arr a mountain if the following properties hold:

    arr.length >= 3
    There exists some i with 0 < i < arr.length - 1 such that:
        arr[0] < arr[1] < ... arr[i-1] < arr[i]
        arr[i] > arr[i+1] > ... > arr[arr.length - 1]

Given an integer array arr that is guaranteed to be a mountain, return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].
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