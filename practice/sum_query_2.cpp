//Date: 18 Sept 2021

#include<bits/stdc++.h>
using namespace std;



vector<int> querySum(int n, int arr[], int q, int queries[])
{
        vector<int> ans;
        // int sum=0;
        int left, right;
        for(int i=0;i<q*2;i=i+2)
        {
            left=queries[i];
            right=queries[i+1];
            int sum=0;
            for(int j=left-1;j<right;j++)
            {
                sum+=arr[j];
            }
            ans.push_back(sum);
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
    int q;
    cin >> q;
    int queries[2*q];
    for(int i=0;i<q*2;i++)
    {
        cin >> queries[i];
    }

    vector<int> ans = querySum(n,arr,q,queries);

    for(int i:ans)
        cout<<i<<" ";
    cout<<endl;
    return 0;

}