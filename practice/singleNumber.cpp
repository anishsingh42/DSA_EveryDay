//Date: 7th Dec 2021

/*
    Every element in the array appears twice except one element. Print that element that appears only once in an array
*/

#include<bits/stdc++.h>
using namespace std;

int singleNumber(int arr[], int size)
{
    int answer = 0;
    //we know that 0^A = A;
    // we also know that A^A = 0;

    for(int i=0;i<size;i++)
    {
        answer = answer ^ arr[i];
    }
    return answer;
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
    cout << "The single Element in the list is: " << singleNumber(arrInt, size) << endl;
    return 0;
}