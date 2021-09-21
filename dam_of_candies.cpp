//Date: 21 Sept 2021


#include<bits/stdc++.h>
using namespace std;

int maxCandy(int height[], int n) 
{ 
        
    int ans=0;
        
    int i=0;
    int j=n-1;
        
    while(i<j)
    {
        if(height[i]<height[j])
        {
            ans = max(ans,(j-i-1)*height[i]);
            i++;
        }
        if(height[j]<height[i])
        {
            ans = max(ans,(j-i-1)*height[j]);
            j--;
        }
        if(height[i]==height[j])
        {
            ans = max(ans,(j-i-1)*height[i]);
            i++;
            j--;
        }
         
    }
        
        
        
        
    return ans;
        
}

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout << maxCandy(arr,n);
    return 0;
}