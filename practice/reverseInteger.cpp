//Date: 23rd Nov 2021

#include<bits/stdc++.h>
using namespace std;

int reverseInteger(int n)
{
    int reverseNumber = 0;
    int lastDigit = 0;
    while(n)
    {
        lastDigit = n%10;
        //check whether on multiplying with 10 we are making it greater or lesser than INT_MAX or INT_MIN
        if((reverseNumber > INT_MAX/10) || (reverseNumber < INT_MIN/10))
            return 0;
        
        //if no perform otherwise normally
        reverseNumber = reverseNumber*10 + lastDigit;
        n=n/10;
    }

    return reverseNumber;
}


int main()
{
    int n;
    cout << "Enter the number that needs to be reversed: ";
    cin >> n;
    
    cout << "Reverse of the number is: " << reverseInteger(n);
    return 0;
}