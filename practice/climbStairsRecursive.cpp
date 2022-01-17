#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n)
{
    //base soln
    //returning the number of ways to climb if ...
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    //recursive soln
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << "Number of ways to climb stairs are:  " << climbStairs(n);
    return 0;
}