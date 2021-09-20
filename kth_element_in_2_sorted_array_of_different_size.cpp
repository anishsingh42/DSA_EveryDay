//Date: 17 Sept 2021

#include<bits/stdc++.h>
using namespace std;


int kthElement(int arr1[], int arr2[], int n, int m, int k)
{
        if(n>m)
            return kthElement(arr2,arr1,m,n,k);
        int low = max(0,k-m),high=min(k,n);
        
        
        while(low<=high)
        {
            int cut1=(low+high)/2;
            int cut2=k-cut1;
            
            int l1=cut1==0?INT_MIN:arr1[cut1-1];
            int l2=cut2==0?INT_MIN:arr2[cut2-1];
            int r1=cut1==n?INT_MAX:arr1[cut1];
            int r2=cut2==m?INT_MAX:arr2[cut2];
            
            
            if(l1<=r2 && l2<=r1)
                return max(l1,l2);
            else if(l1>r2)
                high=cut1-1;
            else
                low=cut1+1;
        }
        return 1;
        
}


int main()
{
    int n1;
    cin >> n1;
    int array1[n1];
    for(int i=0;i<n1;i++)
    {
        cin >> array1[i];
    }

    int n2;
    cin >> n2;
    int array2[n2];
    for(int i=0;i<n2;i++)
    {
        cin >> array2[i];
    }
    int k;
    cin >> k;

    
    cout<<"Kth Element: "<<kthElement(array1,array2,n1,n2,k);
}