//Date: 22nd Nov 2021
#include<bits/stdc++.h>
using namespace std;


int subtractProductAndSum(int n) 
{
    int sum=0;
    int pro=1;
        
    while(n)
    {
        int lastDigit=n%10;
        sum+=lastDigit;
        pro*=lastDigit;
        n/=10;
    }
    int ans = pro-sum;
    return ans;
}

int main()
{
    int n;
    cout <<"Enter the number:";
    cin >> n;
    cout << "Output: "<<subtractProductAndSum(n) <<endl; 
    return 0;
}