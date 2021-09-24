#include<bits/stdc++.h>
using namespace std;




vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans;
    
    int low=0;
    int high=n-1;
    
    while(low<=high)
    {
        if(arr[low]!=x)
            low++;
        if(arr[high]!=x)
            high--;
        if(arr[low]==x && arr[high]==x)
        {
            ans.push_back(low);
            ans.push_back(high);
            break;
        }
            
    }
    if(ans.size()!=0)
        return ans;
    else
    {
        ans.push_back(-1);//first not found
        ans.push_back(-1);//last not found 
        return ans;
    }
    
    
}


int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int x; cin >> x;

    vector<int> ans = find(arr,n,x);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }cout<<endl;

    return 0;

}