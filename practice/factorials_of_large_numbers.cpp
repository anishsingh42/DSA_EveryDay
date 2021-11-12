//Date: 20 Sept 2021


#include<bits/stdc++.h>
using namespace std;

vector<int> factorialLargenumbers(int N)
{
    vector<int>res;//empty vector
    res.push_back(1);//vector with size 1 and element is also 1
    int carry=0;
    for(int i=2;i<=N;i++)
    {
        for(int j=res.size()-1;j>=0;j--)
        {
            int product = ((res[j]*i)+carry);
            carry = product/10;
            res[j] = product%10;
        }
        if(carry==0) continue;
        while(carry!=0)
        {
            res.insert(res.begin(),carry%10);
            carry/=10;
        }
        carry=0;
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    vector<int> result = factorialLargenumbers(n);
    for(int i:result)
    {
        cout<<i<<"";
    }
    cout<<endl;
    return 0;
}