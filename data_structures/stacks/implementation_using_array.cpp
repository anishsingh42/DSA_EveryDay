#include <bits/stdc++.h>
using namespace std;

//array implementation
//define the size of the stack
#define maxSize 101
//static array

/*
    fundamental operations
        1. push(x)
        2. pop()
        3. peek()
        4. isEmpty()
        5. isFull()
        6. init()
*/
struct Stack
{
    int top;
    int staticStackArr[maxSize];
}StackStatic;

void init()
{
   StackStatic.top = -1;
}
bool isEmpty()
{
    if (StackStatic.top == -1)
        return true;
    else
        return false;
}

bool isFull()
{
    if (StackStatic.top >= maxSize)
        return true;
    else
        return false;
}
void push(int value)
{
    if (isFull())
    {
        cout << "Stack is OVERFLOW , no more push operation available. :(" << endl;
    }
    else
    {
        StackStatic.top = StackStatic.top+1;
        StackStatic.staticStackArr[StackStatic.top] = value;
        cout << "Element pushed!!!" << endl;
    }
}

int pop()
{
    if (isEmpty())
    {
        cout << "Stack is UNDERFLOW, push some elements to pop. :)" << endl;
    }
    else
    {
        int popElement = StackStatic.staticStackArr[StackStatic.top];
        StackStatic.top--;
        cout << "The Element popped: " << popElement << endl;

    }
}
int peek()
{
    return StackStatic.staticStackArr[StackStatic.top];
}
int main()
{
    int choice,value;
    init();
    while(1)
    {
        cout << "0.Exit" << endl;
        cout << "1.Push" << endl;
        cout << "2.Pop" << endl;
        cout << "3.Is Empty?" << endl;
        cout << "4.Is Full?" << endl;
        cout << "5.Peek" << endl;

        cout << "Enter you Choice: ";
        cin >> choice;
        switch(choice)
        {
            case 0: exit(0); break;

            case 1: cout << "Enter the value that needs to be pushed: ";
            cin >> value;
            push(value);
            break;

            case 2: pop();
            break;

            case 3: if(isEmpty()) cout << "Stack is empty!!!" << endl;
            else cout << "Stack is not empty!!!" <<endl;
            break;

            case 4: if(isFull()) cout << "Stack is full!!!" << endl;
            else cout << "Stack is not full!!!" <<endl;
            break;

            case 5: cout << "The Top element is " << peek() << endl;
            break;
        }
    }
    return 0;
}