#include <bits/stdc++.h>
using namespace std;

//iterative Solution
int modularExponentiationIterative(int a, int b, int mod)
{
    int res = 1;
    while(b>0)
    {
        if(b&1)//odd
        {
            res = (1LL * (res * a)%mod)%mod;
        }
        a = (1LL * (a * a)%mod)%mod;
        b = b>>1;
    }
    return res;
}
//recursive Solution
int modularExponentiationRecursive(int a, int b, int mod)
{
    //base case
    if(a==0)
        return 0;
    if(b==0)
        return 1;
    
    //if b even 
    long long res;
    if(!(b&1))  {
        res = modularExponentiationRecursive(a , b/2 , mod);
        res = (res*res)%mod;
    }
    //if odd
    else
    {
        res = a % mod; 
        res = (res * modularExponentiationRecursive(a , b-1, mod)%mod)%mod;
    }
    return (int)((res+mod)%mod);
}

int main()
{
    int a,b,mod;
    cout << "Enter a and b: ";
    cin >> a >> b;
    cout << "Mod ";
    cin >> mod;
    cout << modularExponentiationIterative(a,b,mod);

    cout << endl << modularExponentiationRecursive(a,b,mod);
    return 0;
}