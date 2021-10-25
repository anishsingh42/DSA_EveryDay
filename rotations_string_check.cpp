#include<bits/stdc++.h>
using namespace std;

//will return true and false 
//true when s2 is rotation of s1 and false otherwise
bool areRotation(string s1, string s2)
{
    //get the size of both the string
    int size_s1 = s1.size();
    int size_s2 = s2.size();


    //check whether both the size are equal or not
    //if not equal then there is no chance of them being rotation of each other  
    if(size_s1!=size_s2)
        return false;

    //create a temp string that stores temp=s1+s1
    string temp;
    temp=s1+s1;


    //check whether s2 is the substring of temp or not
    //instead of -1 we can also write if(temp.find(s1)!=string::npos)
    //temp.find(str2) returns the starting index of str2 in temp
    //string::npos returns -1 ... it is a static variable 
    if(temp.find(s2)!=-1)
        return true;
    else
        return false;

}

int main()
{
    string s1;
    cout<<"Enter string 1: ";
    cin >> s1;
    cout<<endl;
    string s2;
    cout<<"Enter string 2: ";
    cin >> s2;
    cout<<endl;

    if(areRotation(s1,s2))
        cout<<"Yes string 2 is rotation of string 1"<<endl;
    else
        cout<<"No string 2 is not the rotaion of string 1"<<endl;
    return 0;
}