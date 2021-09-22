//Date : 22 Sept 2021



#include<bits/stdc++.h>
using namespace std;


int repeatedStringMatch(string A, string B) 
{
        int count=1;
        // int repeat = B.size()/A.size();
        // repeat=repeat+2;
        string str = A;
        //dry run this logic to understand better 
        while(str.size()<B.size())
        {
            str+=A;
            count++;
        }
        if(str.find(B)!=string::npos)
                return count;
        //string::npos means till the end of the string 
        str+=A;
        if(str.find(B)!=string::npos)
                return count+1;
        else 
                return -1;
        
}



int main()
{
    string a;
    string b;
    cin >> a;
    cin >> b;
    cout<<"Ans: "<<repeatedStringMatch(a,b)<<endl;

    return 0;
}