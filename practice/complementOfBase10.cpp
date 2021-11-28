//Date: 23rd Nov 2021
#include<bits/stdc++.h>
using namespace std;
int bitwiseComplement(int n) {
        //take not of n , i.e , ~n & mask
        int temp = n;
        
        //if n = 0 then complement of 0 is 1
        if(n==0)
            return 1;
        int mask = 0;
        while(temp)
        {
            mask = (mask<<1) | 1;
            temp = temp >> 1;
        }
        int complement = (~n & mask);
        return complement;
}
int main()
{
    int n;
    cout << "Enter integer: ";
    cin >> n;
    cout << "The Complement is: " << bitwiseComplement(n);
    return 0;
}