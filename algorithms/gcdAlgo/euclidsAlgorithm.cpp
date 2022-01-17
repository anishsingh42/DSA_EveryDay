#include <bits/stdc++.h>
using namespace std;

//iterative solution
int gcdEuclidAlgoIterative(int a, int b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;

    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
//recursive solution ===> Easier Method
int gcdEuclidAlgoRecursive(int a, int b)
{
    //base case
    if (a == 0)
        return b;
    else if (b == 0)
        return a;

    //condition
    if (a > b)
        return gcdEuclidAlgoRecursive(a - b, b);
    else
        return gcdEuclidAlgoRecursive(a, b - a);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcdEuclidAlgoRecursive(a, b)<< endl;
    cout << gcdEuclidAlgoIterative(a,b) << endl;
    return 0;
}