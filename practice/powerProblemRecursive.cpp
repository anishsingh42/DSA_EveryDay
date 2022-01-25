#include <bits/stdc++.h>
using namespace std;

int toPower(int x, int y)
{
    //base case
    //y == 0 return 1
    if (y == 0)
        return 1;
    if (x == 0)
        return 0;
    if (y == 1)
        return x;

    //recursive call
    int ans = toPower(x, y / 2);
    //processing
    //if y is even calculate till y/2 and square the ans
    if (y%2!=0)
        return x * ans * ans;
    //if y is odd does as per even and multiply one extra x
    else
        return ans * ans;
}

int main()
{
    int a;
    int b;
    cout << "Please Enter A and B: ";
    cin >> a >> b;
    cout << endl;
    cout << "Power is: " << toPower(a, b);
    return 0;
}
