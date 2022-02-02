#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &a)
{
    vector<vector<int>> ans;

    //empty intervals array
    if (a.size() == 0)
        return ans;

    //intervals vector if vector has only one element
    if (a.size() == 1)
    {
        ans.push_back(a[0]);
        return ans;
    }

    //more than 1 elements
    sort(a.begin(), a.end());
    int j = 0;
    ans.push_back(a[0]);
    for (int i = 0; i < a.size(); i++)
    {
        //overlapping
        if (ans[j][1] >= a[i][0])
            ans[j][1] = max(ans[j][1], a[i][1]);

        //not overlapping
        else
        {
            j++;
            ans.push_back(a[i]);
        }
    }

    return ans;
}

int main()
{
    int n;
    vector<vector<int>> intervals;
    intervals  = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> answer;
    answer = mergeIntervals(intervals);
    for(int i=0;i<answer.size();i++){
        for(int j=0;j<2;j++){
            if(j==0){
                cout << "[";
            }
            cout << " " << answer[i][j] << " ";
            if(j==1){
                cout << "] ";
                cout << endl;
            }
        }
    }
    return 0;
}