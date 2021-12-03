//using stack STL
#include<bits/stdc++.h>
using namespace std;

//pass by reference
//function is to check the balance of parenthesis
bool checkParenthesis(string &str)
{
    stack<char> S;

    
    //the pointer 
    int i=0;
    //the size of the string
    int size = str.size();

    //we need to push and pop simultaneously 
    //push if("{" || "(" || "[") 
    //pop else if("}" || ")" || "]")
    //newClose keeps the track of the "not closed parenthesis"
    char newClose;
//"[(){}]"
    for(int i=0; i<size; i++)
    {
        if((str[i] == '{') || (str[i] == '(') || (str[i] == '['))
        {
            S.push(str[i]);
        }
        else
        {
            newClose = str[i];
            switch (newClose)
            {
            case ']':
                newClose = S.top();
                S.pop();
                if((newClose == '(') || (newClose == '{')) return false;
                break;

            case ')':
                newClose = S.top();
                S.pop();
                if((newClose == '{') || (newClose == '[')) return false;
                break;
                break;
            
            case '}':
                newClose = S.top();
                S.pop();
                if((newClose == '[') || (newClose == '(')) return false;
                break;
                break;
            }
        }
    }
    //check whether the loop is empty or not 
    //is not then return false because the parenthesis is not balance otherwise true
    return (S.empty());

}


int main()
{
    string str;
    cout << "Enter the combination of parenthesis without space: ";
    cin >> str;
    cout << endl;

    if(checkParenthesis(str))
    {
        cout << "Parenthesis Balance .. Hurray !!!" << endl;
    }
    else
    {
        cout << "Parenthesis not Balance ... :(" << endl;
    }
    return 0;
}