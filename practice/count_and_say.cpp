//Date: 26 th Oct 2021
#include<bits/stdc++.h>
using namespace std;

string countSay(string &str)
{
    //initialize result
    string result="";
    //spilt the string str into array of characters
    //find the size of the string str
    int size = str.size();
    char arr_str[size];

    //keep inserting the characters of the string in the array
    for(int i=0;i<size;i++)
    {
        arr_str[i] = str[i]; 
    }


    //creating count and traversing the array of characters
    int count = 0;
    for(int i=0;i<size;i++)
    {
        count++;
        if(arr_str[i+1]!=arr_str[i])
        {
            stringstream ss;
            ss<<count;
            string c;
            ss>>c;
            result+=c+arr_str[i];
            count = 0;
        }
        
    }

    return result;

}


int main()
{
    string str = "33222511";
    cout<<countSay(str);
    return 0;
}