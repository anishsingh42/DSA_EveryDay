#include<bits/stdc++.h>
using namespace std;


int maxProfit(int arr[], int n){
    int minBuyingPrice = INT_MAX;
    int profitMax = INT_MIN;
    for(int i=0;i<n;i++){
        minBuyingPrice = min(minBuyingPrice, arr[i]);
        profitMax = max(profitMax,arr[i] - minBuyingPrice);
    }
    return profitMax;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << maxProfit(arr,n) << endl;
    return 0;
}