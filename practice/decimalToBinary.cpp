#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n)
{
    int bit = 0;
    int binary = 0;
    int exponent = 0;
    while(n)
    {
        bit = n&1; //fetching last bit
        binary = (bit*pow(10,exponent)) + binary;
        n>>=1;
        exponent++;
    }
    return binary;
    
}


int main()
{
    int n;
    cout << "Enter Positive Integer (Decimal): ";
    cin >> n;

    cout << "Binary format of " << n << " is : " << decimalToBinary(n);
    return 0;
}