#include <bits/stdc++.h>
using namespace std;

string numbers[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void sayCount(int n)
{
    //base case
    if (n == 0)
        return;

    //recursive case
    int lastDigit = n%10;
    sayCount(n/10);
    cout << numbers[lastDigit] <<" ";
    
}
int main()
{
    int n;
    cin >> n;
    sayCount(n);
    return 0;
}