//Date: 15th Dec 2021
#include<bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
    long long int start = 0;
    long long int end = x;
    long long int  mid;
    long long int ans;
    while(start <= end)
    {
        mid = start + ((end - start)/2);
            
        if((mid*mid) == x)
        {
            //perfect square root
            ans = mid;
            return ans;
        }
        else if((mid*mid) < x)
        {
            //not perfect square root
            ans = start;
            start = mid + 1;
        }
            
        else
            end = mid - 1;
    }
    return ans;
}

//to find precision of not perfect square root
// double morePrecision(int n, int precision, int sqrtAns)
// {
//     double factor = 1;
//     double sqrtFinal = sqrtAns;
//     for(int i=0 ;i<precision;i++)
//     {
//         factor = factor/10;

//         for(int j=sqrtFinal; j*j<n; j=j+factor)
//         {
//             sqrtFinal = j;
//         }

//     }
//     return sqrtFinal;
// }
int main()
{
    int n;
    cout << "Enter the Number whose integer root you want to know: ";
    cin >> n;
    int tempSol = mySqrt(n);
    cout << "Integer Root of the number " << n << " is " << tempSol;
    return 0;
}