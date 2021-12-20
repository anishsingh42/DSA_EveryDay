#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixAddition(int n, vector<vector<int>>a ,int m, vector<vector<int>>b)
{
    vector<vector<int>> ans;
    if(n!=m)
    {
        vector<int> temp;
        temp.push_back(INT_MIN);
        ans.push_back(temp);
        return ans;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            vector<int> cell;
            for(int j=0;j<n;j++)
            {
                int temp  = a[i][j] + b[i][j];
                cell.push_back(temp); 
            }
            ans.push_back(cell);
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the matrix 1: ";
    cin >> n;
    vector<vector<int>> a;
    cout << "Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        vector<int> t;
        for(int j=0;j<n;j++)
        {
            int temp;
            cin >> temp;
            t.push_back(temp);
        }
        a.push_back(t);
    }
    cout << "/n Matrix 1 is: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int m;
    cout << "Enter the size of the matrix 2: ";
    cin >> m;
    vector<vector<int>> b;
    cout << "Enter the elements: ";
    for(int i=0;i<m;i++)
    {
        vector<int> t;
        for(int j=0;j<m;j++)
        {
            int temp;
            cin >> temp;
            t.push_back(temp);
        }
        b.push_back(t);
    }

    cout << "/n Matrix 2 is: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    vector<vector<int>> ans;
    ans = matrixAddition(n,a,m,b);

    cout << "/n Matrix ANS is: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}