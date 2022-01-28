#include<bits/stdc++.h>
using namespace std;


int findDuplicate(int  a[], int n) {
        //concept of XOR
        int ans=a[0];
        for(int i=1;i<n;i++){
            ans^=a[i];
        }
        for(int i=1;i<n;i++)
        {
            ans^=i;
        }
        
        return ans;
        
    }

int main()
{
int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Duplicate Element  is : " << findDuplicate(a, n);
return 0;
}