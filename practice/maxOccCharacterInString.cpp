#include <bits/stdc++.h>
using namespace std;

int maximumArrayelement(int arr[], int n)
{
    int maximum = INT_MIN;
    int index;
    for (int i = 0; i < n; i++)
    {
        if (maximum < arr[i])
        {
            maximum = arr[i];
            index = i;
        }
    }

    return index;
}
//Function to find the maximum occurring character in a string.
char getMaxOccuringChar(string str)
{
    // Your code here
    char ch;
    int index;
    //create a int alphabet[26]={0};
    int alphabet[26] = {0};

    //let us consider a = 0 , b = 1 , c = 2 and so on till z = 25 and similarly for A = 0 , B = 1 ... Z = 25
    for (int i = 0; i < str.size(); i++)
    {
        ch = str[i];
        //if lower case the ch - 'a' is index just increment alphabet[index]++;
        if (ch >= 'a' && ch <= 'z')
        {
            index = (int)(ch - 'a');
            alphabet[index]++;
        }
        //if upper case then ch - 'A' is nidex just increment alphabet[index]++;
        else if(ch >= 'A' && ch <= 'Z')
        {
            index = (int)(ch - 'A');
            alphabet[index]++;
        }
    }

    
    
    //return max char
    int maximumIndex = maximumArrayelement(alphabet, 26);
    char maxOccChar = (char)maximumIndex + 'a';
    return maxOccChar;
}

int main()
{
    string str;
    cin >> str;
    cout << getMaxOccuringChar(str);
    return 0;
}