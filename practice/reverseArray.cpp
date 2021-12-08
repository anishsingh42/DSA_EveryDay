//Date: 7th Dec 2021

#include<bits/stdc++.h>
using namespace std;
template<typename T>
void Swap(T &A, T &B)
{
    T temp = A;
    A = B;
    B = temp;
}

template<typename T>
void Reverse(T arr[] , int size)
{
    for(int i=0,j=size-1 ; i<=j ; i++,j--)
    {
        Swap(arr[i],arr[j]);
    }
}

template<typename T>
void getArrayValues(T arr[], int size)
{
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";
}
int main()
{
    //for arr int
    int arrInt[5] = {1,10,34,55,42};
    cout << "Before reverse: "<<endl;
    getArrayValues(arrInt,5);
    cout << endl;
    cout << "After reverse: "<<endl;
    Reverse(arrInt,5);
    getArrayValues(arrInt,5);

    cout << endl;
    //for char arr
    char arrChar[5] = {'a','B','*','d','g'};
    cout << "Before reverse: "<<endl;
    getArrayValues(arrChar,5);
    cout << endl;
    cout << "After reverse: "<<endl;
    Reverse(arrChar,5);
    getArrayValues(arrChar,5);
    return 0;
}