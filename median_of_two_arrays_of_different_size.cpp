//Date: 19 Sept 2021

#include<bits/stdc++.h>
using namespace std;


double MedianOfArrays(int n1, int array1[], int n2, int array2[])
{
        //making array1 size < array2 size
        if(n1>n2) return MedianOfArrays(n2,array2,n1,array1);
        int length=0;
        //use the below code while using vectors 
        // int n1 = array1.size();
        // int n2 = array2.size();
        length=(n1+n2+1)/2;
        int low=0;
        int high=n1;
        
        
        while(low<=high)
        {
           int cut1=(low+high)/2;
           int cut2=length-cut1;
        
            int l1, l2, r1, r2;
            l1=cut1==0?INT_MIN:array1[cut1-1]; 
            l2=cut2==0?INT_MIN:array2[cut2-1];
            
            r1=cut1==n1?INT_MAX:array1[cut1];
            r2=cut2==n2?INT_MAX:array2[cut2];
            
            
            if((l1<=r2) && (l2<=r1))
            {
                if((n1+n2)%2==0)
                    return (max(l1,l2)+min(r1,r2))/2.0;
                else
                    return max(l1,l2);
            }
            else if(l1>r2)
                high=cut1-1;
            else
                low=cut1+1;
        }
        return 0.0;
        
        
    
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


    cout<<"Median: "<<MedianOfArrays(n1,array1,n2,array2)<<endl;
}