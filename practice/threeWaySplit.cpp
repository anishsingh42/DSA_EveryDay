#include<bits/stdc++.h>
using namespace std;

long long threeWaySplit(int n, vector<int> arr){
    // Write your code here.
    int i=0;
    int j=n-1;
    long long s3=arr[j];
    long long s1=arr[i];
    // long long ans=0;
    while(i<j)
    {
        if(s1==s3)
        {
            return s1;
        }
        else if(s1<s3)
        {
            i++;
            s1+=arr[i];
        }
        else
        {
            j--;
            s3+=arr[j];
        }
            	
    }
    return 0;
}


int main()
{
    int n; cin >> n;
    vector<int> arr;

    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "S1: " << threeWaySplit(n,arr);
    return 0;
}