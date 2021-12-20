//Date 10th Dec 2021
/*
    Chef built a binary string S that has exactly N hills and M

valleys.

    A hill is any index 1<i<|S|

such that both its neighbors are strictly smaller than it, i.e, Si−1<Si and Si+1<Si

A valley is any index 1<i<|S|
such that both its neighbors are strictly larger than it, i.e, Si−1>Si and Si+1>Si

Chef thinks that his string S
is the shortest among all binary strings with N hills and M valleys. You don't quite trust his words, so to verify his claim you would like to find the shortest binary string with exactly N hills and M

valleys.

If there are multiple possible binary strings of the least length satisfying the given condition, you may print any of them.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

	int t; cin >> t;
	while(t--)
	{
	    int n;
	    int m;
	    cin >> n >> m;
	    string str = "";
	    
	    if(m==n)
	    {
	        for(int i=0;i<=n;i++)
	        {
	            str += "01";
	        }
	  
	    }
	    else if(m>n)
	    {
	        for(int i=0;i<=n;i++)
	        {
	            str += "10";
	        }
	        for(int i=0;i<m-n-1;i++)
	        {
	            str += "110";
	        }
	        str += "1";
	    }
	    else
	    {
	        for(int i=0;i<m;i++)
	        {
	            str += "01";
	        }
	        for(int i=0;i<n-m;i++)
	        {
	            str += "010";
	        }
	        
	    }
	    
	    cout << str.size() << endl << str << endl;
	    
	}
	return 0;
}
