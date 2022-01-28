#include <bits/stdc++.h>
using namespace std;



void mergeSortedArray(int a[], int n, int b[], int m, int c[]){
    int i=0;
    int j=0;
    int k=0;

    while(i<n && j<m){
        if(a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else{
            c[k++] = b[j++];            
        }
    }
    while(i<n){
        c[k++] = a[i++];
    }
    while(j<m){
        c[k++] = b[j++];
    }
    //T.C = N*M and S.C = N+M
}
int main()
{
    cout << "Details for a: ";
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout <<endl;

    cout << "Details for b: ";
    int m;
    cin >> m;
    int *b = new int[m];
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    cout <<endl;

    int *c = new int[n+m];
    mergeSortedArray(a,n,b,m,c);
    cout << endl;
    for(int i=0;i<n+m;i++){
        cout << c[i] << " ";
    }
    cout << endl;
    return 0;
}