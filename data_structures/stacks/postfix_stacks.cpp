#include<bits/stdc++.h>
using namespace std;


//postfix
//((a*b)+(c*d)-e) ===> ab*cd*+e-

//this function will create the infix to postfix expression
string postFix(string &str)
{
    string postfixExp = "";
    stack<char> S;

    int size = str.size();
    char topOperator;

    for(int i=0 ; i<size ; i++)
    {
        if((str[i]!= '*') || (str[i]!= '/') || (str[i]!= '-') || (str[i]!= '+'))
        {
            postfixExp+=str[i];
        }
        else
        {
            if(S.empty()) 
                S.push(str[i]);
            
            else
            {
                topOperator = S.top();
                switch (topOperator)
                {
                case '+':
                    if((str[i] == '*') || (str[i] == '/'))
                        S.push(str[i]);

                    else
                    {
                        postfixExp += topOperator;
                        S.pop();
                        S.push(str[i]);
                    }
                    break;

                case '-':
                    if((str[i] == '*') || (str[i] == '/'))
                        S.push(str[i]);

                    else
                    {
                        postfixExp += topOperator;
                        S.pop();
                        S.push(str[i]);
                    }
                    break;

                case '/':
                        postfixExp += topOperator;
                        S.pop();
                        S.push(str[i]);
                    
                    break;

                case '*':
                        postfixExp += topOperator;
                        S.pop();
                        S.push(str[i]);
                    
                        break;
                }



            }
        }
    }
    if(S.empty())
        return postfixExp;
    else
    {
        while(S.empty())
        {
            topOperator = S.top();
            postfixExp+=topOperator;
            S.pop();
        }
        return postfixExp;
    }
}

int main()
{
    string exp;
    cout << "Enter the infix expression (WITHOUT ANY SPACE!!!): ";
    cin >> exp;
    cout << endl;

    cout << postFix(exp);
    return 0;
}