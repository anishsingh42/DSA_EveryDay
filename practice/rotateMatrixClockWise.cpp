#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        //transpose
        //i=rowElement , j=colElement
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //reverse the transpose
        int n = matrix.size();
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<n/2;j++)
            {
                swap(matrix[i][j],matrix[i][n-j-1]);
            }
        }
        
    }


int main()
{
    
    int n; cin >> n;
    int m; cin >> m;

    vector<vector<int>> matrix;

    for(int i=0;i<n;i++)
    {
        vector<int> colElements;
        for(int j=0;j<m;j++)
        {
            int temp;
            cin >> temp;
            colElements.push_back(temp);
        }
        matrix.push_back(colElements);
    }


    rotate(matrix);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}