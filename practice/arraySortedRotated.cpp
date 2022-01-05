//Date: 5th Jan 2022
#include <bits/stdc++.h>
using namespace std;


bool check(vector<int> &A)
{
    for (int i = 0, k = 0; i < A.size(); ++i)
        if (A[i] > A[(i + 1) % A.size()] && ++k > 1)
            return false;
    return true;
}


int main()
{
    int n;
    cin >> n;
    vector<int> A;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        A.push_back(temp);
    }

    if (check(A))
        cout << "True" << endl;
    else
        cout << "False " << endl;
    return 0;
}