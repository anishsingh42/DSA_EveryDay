//Date : 12th Dec 2021

/*
    Ninja took you to an apple store where there is 'N' number of different apples present in the store and ith apple cost 'ARR[i]' coins. It is pre-decided that you have to buy all of them. You would be given a coupon by Ninja that allows you to buy ‘M’ apples while paying only for 'M - 1' most expensive apples. Thus, you will get the cheapest apple for free. You can use the coupon once only.
    Now, Ninja requested you to tell the minimum total coins required to buy all apples if the coupon is used optimally. It is necessary to use the coupon and have to select ‘M’ apples for using it
*/

#include<bits/stdc++.h>
using namespace std;


long long appleAndCoupon(int n, int m, vector<int> arr){
    sort(arr.begin(),arr.end(),greater<int>());
    long long sum=0;
    for(int i=0;i<m-1;i++)
    {
        sum+=arr[i];
    }
    for(int i=m;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    int n; cin >> n;
    int m; cin >> m;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "The Total coins to be paid: " << appleAndCoupon(n,m,arr);
    return 0;
}