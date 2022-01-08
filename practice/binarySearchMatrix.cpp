#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    //the entire matrix if looked in a linear form will look sorted therefore satisfying the condition for binary search in linear array

    //rows and cols
    int row = matrix.size();
    int col = matrix[0].size();
    //the start element will be the very first element index
    int start = 0;
    //the end element will be the last element index
    int end = (row * col) - 1;

    //mid
    int mid;
    while (start <= end)
    {
        mid = start + ((end - start) / 2);

        if (matrix[mid / col][mid % col] == target)
            return true;
        else if (matrix[mid / col][mid % col] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return false;
}

int main()
{

    int n;
    cin >> n;
    int m;
    cin >> m;

    vector<vector<int>> matrix;

    for (int i = 0; i < n; i++)
    {
        vector<int> colElements;
        for (int j = 0; j < m; j++)
        {
            int temp;
            cin >> temp;
            colElements.push_back(temp);
        }
        matrix.push_back(colElements);
    }
    int target;
    cin >> target;
    cout << searchMatrix(matrix, target) << endl;
    return 0;
}

//T.C = O(log(N)) = O(log(row*col))