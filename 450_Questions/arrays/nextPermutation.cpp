#include<bits/stdc++.h>
using namespace std;

void nextPermutation(int *a, int n){
    //initialize breakpoint
    int breakpoint = -1;
    for(int i=n-1;i>0;i--){
        if(a[i-1] < a[i]){
            breakpoint=i-1;
            break;
        }
    }

    //if breakpoint =0 ;
    if(breakpoint < 0){
        reverse(a,a+n);
        return;
    }
    
    //if breakpoint >= 0
    for(int i=n-1;i>breakpoint;i--){
        if(a[i] > a[breakpoint]){
            swap(a[i], a[breakpoint]);
            reverse(a+breakpoint+1, a+n);
            return;
        }
    }
}


int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    nextPermutation(a, n);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}