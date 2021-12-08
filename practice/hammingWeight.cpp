#include<bits/stdc++.h>
using namespace std;

int hammingWeight(int n) 
{
        int count = 0;
        
        while(n)
        {
            if(n & 1)
                count++;
            
            n=n>>1;
        }
        
        return count;
}


int main()
{
    uint32_t n;//uint32_t n means typedef unsigned int uint32_t
    cout << "Enter the decimal number: ";
    cin >> n;
    cout << "Output number of set bits: " << hammingWeight(n);
    return 0;
}