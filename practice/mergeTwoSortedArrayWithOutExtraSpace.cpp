#include <bits/stdc++.h>
using namespace std;
void mergeSortedArray1(int a[], int n, int b[], int m){
    int i=0;
    while(i<n){
        if(a[i] > b[0]){
            swap(a[i],b[0]);
        }
        sort(b,b+m); // T.C = O(nlogn)
        i++;
    }//T.C=O(n)
    //T.C = N*N*logN
    //S.C = const
}

//GAP Method
//Learn T.C = N*logN
//S.C = const

void mergeSortedArray2(int a[], int n, int b[], int m){

}
int main()
{
    cout << "Details for a: ";
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << endl;

    cout << "Details for b: ";
    int m;
    cin >> m;
    int *b = new int[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cout << endl;
    mergeSortedArray1(a,n,b,m);
    for(int i=0;i<n;i++){
        cout << " " << a[i] << " ";
    }
    cout << endl;
    for(int i=0;i<m;i++){
        cout << " " << b[i] << " ";
    }
    cout << endl;
    return 0;
}