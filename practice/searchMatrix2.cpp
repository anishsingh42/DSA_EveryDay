#include<bits/stdc++.h>
using namespace std;


  bool searchMatrix(vector<vector<int> >& matrix, int target) {
        //cant convert it into linear array because not sorted
       //but can reduce the search space by starting from rowIndex = 0 and colIndex = col-1;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int rowIndex = 0;
        int colIndex = col-1;
        
        while(rowIndex < row && colIndex>=0 ) {
            int element = matrix[rowIndex][colIndex];
            
            if(element == target) {
                return 1;
            }
            
            if(element < target){
                rowIndex++;
            }
            else
            {
                colIndex--;
            }
        }
        return 0;
    }

int main()
{int n;
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

//T.C = O(log{row*col})