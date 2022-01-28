#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1631/problem/A
int minMaxSwap(int a[], int b[], int n)
{
    int ans;
    int indexmaxA;int indexmaxB;
    for(int i=0;i<n;i++){
            
        
        indexmaxA = max_element(a,a+n)-a;
        indexmaxB = max_element(b,b+n)-b;
        if(a[indexmaxB] < b[indexmaxB]){
            swap(a[indexmaxB] , b[indexmaxB]);
        }
        
    }
    ans = a[indexmaxA]*b[indexmaxB];
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int ans = minMaxSwap(a, b, n);
        cout << ans << endl;
    }
    return 0;
}