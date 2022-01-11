#include <bits/stdc++.h>
using namespace std;

//Only one condition both the array needs to be sorted

void intersection(vector<int> &a, int n, vector<int> &b, int m)
{
    //i variable to point towards array a and j for b
    int i = 0;
    int j = 0;
    //intersection vector
    vector<int> intersection;

    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            if ((find(intersection.begin(), intersection.end(), a[i])) == intersection.end())
            {
                intersection.push_back(a[i]);
            }
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    for (auto it : intersection)
    {
        cout << it << " ";
    }
    cout << endl;
}
//T.C = O(max(n,m))
//S.C = O(max(n,m))
void Union(vector<int> &a, int n, vector<int> &b, int m)
{
    //i variable to point towards array a and j for b
    int i = 0;
    int j = 0;
    //union vector
    vector<int> unionarr;

    while(i<n || j<m)
    {
        if(a[i] == b[j])
        {
            if((find(unionarr.begin() , unionarr.end(), a[i])) == unionarr.end())
            {
                unionarr.push_back(a[i]);
            }
            i++; j++;
        }
        else if(a[i] < b[j])
        {
            unionarr.push_back(a[i]);
            i++;
        }
        else{
            unionarr.push_back(b[j]);
            j++;
        }

    }
    for (auto it : unionarr)
    {
        cout << it << " ";
    }
    cout << endl;
}
//T.C = O(max(n,m))
//S.C = O(max(n,m))
int main()
{
    cout << "Enter size of array 1 and array 2 respectively: ";
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> a;
    vector<int> b;
    cout << endl
         << "Array 1 elements ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    cout << endl
         << "Array 2 elements";
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        b.push_back(temp);
    }
    intersection(a, n, b, m);
    Union(a,n,b,m);
    return 0;
}