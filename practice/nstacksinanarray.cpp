#include<bits/stdc++.h>
using namespace std;

class NStack
{
    int *arr;
    int *top;
    int *next;
    int freespot;
    int n;
    int s;
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        // Write your code here.
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];
        freespot = 0;
        for(int i=0;i<s-1;i++)
        {
            next[i] = i+1;
        }
        next[s-1] = -1;
        for(int i=0;i<n;i++)
        {
            top[i] = -1;
        }
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Write your code here.
        if(freespot == -1)
            return false;
        //fetch the freespot
        int index = freespot;
        
        //update the freespot
        freespot = next[index];
        
        //push the value in arr
        arr[index] = x;
        
        //update next by representing the next element 
        next[index] = top[m-1];
        
        //update top
        top[m-1] = index;
        
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Write your code here.
        if(top[m-1] == -1)
            return -1;
        
        int index = top[m-1];
        
        top[m-1] = next[index];
        
        int x = arr[index];
        
        next[index] = freespot;
    
        freespot = index;
        
        return x;
    }
}; 