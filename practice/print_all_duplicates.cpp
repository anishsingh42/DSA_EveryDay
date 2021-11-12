//Date: 21/10/21

#include<bits/stdc++.h>
using namespace std;


void printAllDuplicates(string str)
{
    //initializing a unordered map
    unordered_map<char,int>M;

    //find the size of the string 
    int size = str.size();

    //loop to add the individual characters to the unordered map
    for(int i=0;i<size;i++)
    {
        //traverse through each element and check whether the particular element is present in the map or not 
        //M.find(str[i]) returns the iterator to the position of the char if exists
        //M.end() returns the iterator to the last element
        //make_pair makes a pair of x and y datatypes
        if(M.find(str[i]) == M.end())
            M.insert(pair<char,int>(str[i],1));
        else
            //increment the str[i] is found in the map
            M[str[i]]++;
    }


    //print the duplicates 
    for(auto itr:M)
    {
        if(itr.second > 1)
            cout<<itr.first<<" "<<itr.second<<endl;
    }
}

int main()
{
    
    string str;
    cout <<"Input string: ";
    cin >> str;
    cout<<endl;

    printAllDuplicates(str);


    return 0;
}