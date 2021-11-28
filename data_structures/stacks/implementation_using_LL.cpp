#include<bits/stdc++.h>
using namespace std;

/*
    As we are aware of the fact that fundamental stack operations are performed at O(1) or constant time

    We can insert element at the:
        1. At end  ---> O(n)
        2. At Start ---> O(1)
        3. At nth position ---> O(n)

    Hence we will push and pop elements from the start
*/

struct Node
{
    int data;
    Node *next;
};
//defining stack
Node *Stack = NULL;
//defining top pointing no-where
Node *top = NULL;

// void init()
// {
//     top = NULL;
// }
bool isEmpty()
{
    if(top == NULL)
        return true;
    else
        return false;
}
/*
There is no function called is full because we are pushing elements dynamically 
bool isFull()
{

}
*/
void push(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = Stack;
    Stack = newNode;
    

    /*
         The above  5 lines can be easily converted into:
            newNode->next = NULL;
            if(isEmpty())
                Stack = newNode;
            
            newNode->next = Stack;
            Stack = newNode;
    */
   cout << "Element pushed!!! :)" << endl;
}
void pop()
{
    if(isEmpty())
        cout << "Stack is UNDERFLOW. Push some elements to pop!!! :)" << endl;

    int popElement = top->data;
    cout << "Element popped is " << popElement << endl; 
    //we need to pop the first element which entered at the end [thus following the LAST IN FIRST OUT RULE]
    Node *temp = top;
    //Now the next element in the stack needs to be the top
    temp->next = top;
    //free the temp
    delete temp;
}
void peek()
{
    if(isEmpty())   
        cout << "Stack is UNDERFLOW. Push some elements to peek!!! :)" << endl;

    cout << "Top element is" << top->data << endl;
}

int main()
{
    int choice,value;
    // init();
    while(1)
    {
        cout << "0.Exit" << endl;
        cout << "1.Push" << endl;
        cout << "2.Pop" << endl;
        cout << "3.Is Empty?" << endl;
        cout << "4.Peek" << endl;

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

            case 4: peek();
        }
    }
    return 0;
}