//Date : 22 Sept 2021

#include<bits/stdc++.h>
using namespace std;


// n: input to count the number of set bits
//Function to return sum of count of set bits in the integers from 1 to n.
 int largestpowoftwo(int n)
{
        int largestpoweroftwo = 0;
        while((1 << largestpoweroftwo) <= n)
        {
            largestpoweroftwo++;
        }
        return largestpoweroftwo-1;
}
   
int countSetBits(int n)
{
        if(n==0)
            return 0;
        
        int ans=0;
        
        int x = largestpowoftwo(n);
        //adding setbits before the largest power of 2 which is less thatn or equal to n
        //pow(2,largestpoweroftwo)*largestpoweroftwo
        int beforelargestpoweroftwo = x * ((1<<(x-1)));
        
        // adding the most significant bit after largest power of two
        //n - pow(2,largestpoweroftwo) + 1
        int mostsignificantbit = n - (1<<(x)) + 1;
        //remaining
        
        int rest = n - (1<<x);
        //solving the same porblem for n - 2^largestpoweroftwo
        
        ans = beforelargestpoweroftwo + mostsignificantbit + countSetBits(rest);
        
        return ans;
}


int main()
{
    int n;
    cin >> n;
    int ans = countSetBits(n);
    cout << ans << endl;
    return 0;
}