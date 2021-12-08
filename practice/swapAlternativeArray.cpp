//Date : 7th Dec 2021

#include<bits/stdc++.h>
using namespace std;
void Swap(int &A, int &B)
{
    int temp = A;
    A = B;
    B = temp;
}

void swapAlternatives(int arr[], int n)
{
    for(int i=0;i<n;i=i+2)
    {
        //check whether the next element is in the range or not
        if(i+1 < n-1)
            Swap(arr[i],arr[i+1]);
        
            
    }
}
void getArrayValues(int arr[], int size)
{
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";
}
int main()
{
    int arrInt[5] = {1,10,34,55,42};
    cout << "Before swap: "<<endl;
    getArrayValues(arrInt,5);
    cout << endl;
    cout << "After swap: "<<endl;
    swapAlternatives(arrInt,5);
    getArrayValues(arrInt,5);
    cout << endl;

    int arrInt2[6] = {1,10,34,55,42,90};
    cout << "Before swap: "<<endl;
    getArrayValues(arrInt2,6);
    cout << endl;
    cout << "After swap: "<<endl;
    swapAlternatives(arrInt2,6);
    getArrayValues(arrInt2,6);
    cout << endl;
    return 0;
}