#include<bits/stdc++.h>
using namespace std;


//shuffle of one string or not
bool isShuffleStringSubstring(string str1, string str2)
{
    //obtain the size of the str1 and str2
    int size_str1 = str1.size();
    int size_str2 = str2.size();

    //check whether str1 size and str2 size equal or not 
    //if not equal then our answer will be false
    if(size_str1!=size_str2)
        return false;
    
    //find the sorted string of str1
    sort(str1.begin(),str1.end());

    //traverse the str2
    for(int i=0;i<size_str2;i++)
    {

        string temp="";
        for(int j=i;j<size_str1;j++)
        {
            //enter the elements of string str2 in temp
            temp.push_back(str2[j]);

        }
        sort(temp.begin(), temp.end());

        //if both the sorted string are equal return true
        if(str1 == temp )
            return true;
        
    }

}

int main()
{
    string str1;
    cout << "Enter String 1: ";
    cin >> str1;
    
    string str2;
    cout << "Enter String 2: ";
    cin >> str2;

    if(isShuffleStringSubstring(str1 , str2))
        cout << "String 1 is shuffle of string 2" << endl;
    else
        cout << "String 1 is not shuffle of string 2" << endl;


    return 0;
}