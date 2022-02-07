#include<bits/stdc++.h>
using namespace std;


int factorial(int n){
    if(n==0)
        return 1;
    return factorial(n-1)*n;
    /*
    int fact=1;

    for(int i=n;i>=1;i--){
        fact *= i;
    }    
    return fact;
    */
    //Time Complexity : O(n)
    //Space Complexity: O(1)
}


vector<int> factorialNew(int n){

}
int main()
{
    int n;
    cin >> n;
    int fact1 = factorial(n);
    cout << "Using old method: " << fact1 << "\n";
    vector<int> fact2;
    fact2 = factorialNew(n);
    
    return 0;
}