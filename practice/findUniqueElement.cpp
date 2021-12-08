//Date: 7th Dec 2021

/*
    Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.
*/

#include<bits/stdc++.h>
// #include<vectors>
using namespace std;
bool elementInVector(vector<int> arr, int key)
{
    vector<int>::iterator it;

    it = find(arr.begin(), arr.end(), key);
    if(it != arr.end())
        return true;
    else
        return false;
}
bool findUniqueElement(int arr[], int size)
{
    vector<int> ansVec;
    vector<int> doneVec;
        
    int answer;
    for(int i=0; i<size;i++)
    {
        if(elementInVector(doneVec,arr[i]))
            continue;
        else
        {
            doneVec.push_back(arr[i]);
            answer = arr[i];
        }
        int c=0;
        for(int j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                answer ^= arr[i];
                c++;
            }
                
            
        }
        if(c)
            ansVec.push_back(answer);
        else
            ansVec.push_back(-9999);
    }
    cout << endl << "ANSVEC" << endl;
    for(int i=0;i<ansVec.size();i++)
    {
        cout << ansVec[i] << " ";
    }

    cout << endl << "DONEVEC" << endl;
    for(int i=0;i<ansVec.size();i++)
    {
        cout << ansVec[i] << " ";
    }
    sort(ansVec.begin(),ansVec.end());
        
    for(int i=1;i<ansVec.size();i++)
    {
        if(ansVec[i-1] == ansVec[i])
            return false;
    }
    return true;
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
    cout << "The answer is: " << findUniqueElement(arrInt, size) << endl;
    return 0;
}

//incomplete