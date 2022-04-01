#include<bits/stdc++.h>
using namespace std;

class Stacks
{
    public:
    //declaration
        int *arr;
        int top;
        int size;

    //behaviour
    Stacks(int n){
        this->size = n;
        arr = new int[n];
        top = -1;
    }

    bool isempty(){
        if(top == -1)
            return true;
        return false;
    }
    bool isfull(){
        if(top >= size)
            return true;
        return false;
    }

    void push(int element){
        if(!isfull())
            arr[++top] = element;
        else
            cout << "OverFlow" << '\n';
    }

    void pop(){
        if(!isempty())
            top--;
        else    
            cout << "UnderFlow" << '\n';
    }
    
    int peek(){
        if(!isempty())
           return arr[top];
        else
        {
            cout << "UndeFlow" << '\n';
            return -1;
        } 
            
    }
};



int main()
{
    Stacks s(4);
    cout << "Is empty?? " << s.isempty() << '\n';
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Is full?? " << s.isfull() << '\n';
    s.pop();
    s.pop();
    cout << "Peek " << s.peek() << '\n';
    s.push(50);
    s.push(40);
    s.push(60);
    s.push(70);
    cout << "Is full?? " << s.isfull() << '\n';
    cout << "Peek " << s.peek() << '\n';
    return 0;
}