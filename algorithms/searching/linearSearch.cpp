//Linear Search


#include<bits/stdc++.h>
using namespace std;

//making sure it works for all data types
template<typename T>
bool linearSearch(T arr[], T key , int size)
{
    
    for(int i=0;i<size;i++)
    {
        if(arr[i] == key)
        {
            cout << "Index: " << i << endl;
            return true;
        }
    }
    return false;
}

int main()
{
    //for int arr[]
    int arrInt[5] = {1,10,34,55,42};
    int keyInt1 = 42;
    int keyInt2 = 102;
    if(linearSearch(arrInt,keyInt1,5)) cout << "Found " << keyInt1 << endl;
    else cout << "Not found " <<  keyInt1 << endl;

    if(linearSearch(arrInt,keyInt2,5)) cout << "Found" << endl;
    else cout << "Not found " << keyInt2 << endl;

    //for char arr[]
    int arrChar[5] = {'a','B','*','d','g'};
    int keyChar1 = '*';
    int keyChar2 = 'I';
    if(linearSearch(arrChar,keyChar1,5)) cout << "Found " <<  (char)keyChar1 << endl;
    else cout << "Not found " << endl;

    if(linearSearch(arrChar,keyChar2,5)) cout << "Found " << keyChar2 << endl;
    else cout << "Not found " <<  (char)keyChar2 << endl;
    return 0;
}