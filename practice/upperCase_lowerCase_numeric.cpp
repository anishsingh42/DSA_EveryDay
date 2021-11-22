//Date: 18 Nov 2021
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cout << "Input the Character: ";
    ch = cin.get();

    if(ch >= 65 && ch <= 90)
        cout << "Character input is Upper Case. " <<endl;
    else if(ch >= 97 && ch <=122)
        cout << "Character input is LowerCase." << endl;
    else if(ch >= 48 && ch <= 57)
        cout << "Character input is numeric. " << endl;
    else
        cout << "Character input is none of the above." << endl;
    

    return 0;
}