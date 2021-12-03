#include<bits/stdc++.h>
using namespace std;

/*
    As we are aware of the fact that fundamental queue operations are performed at O(1) or constant time

    We can insert element at the:
        1. At end  ---> O(1) if we use tail to store the address of end element
        2. At Start ---> O(1)
        3. At nth position ---> O(n)

    Hence we will push and pop elements from the start
*/

struct Node
{
    int data;
    Node *next;
};
//defining front and rear pointing no-where
Node *front = NULL;
Node *rear = NULL;

bool isEmpty()
{
    if(!front && !rear)
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
    newNode->next = NULL;
    if(isEmpty())
        front = rear = newNode;
        
    rear->next = newNode;
    rear = newNode;
    cout << "Element pushed!!! :)" << endl;
}
void pop()
{
    Node *temp = front;
    if(isEmpty())
        cout << "Stack is UNDERFLOW. Push some elements to pop!!! :)" << endl;

    if(front == rear)
        front = rear = NULL;
    else
        front = front->next;

    cout << "Element popped: " << temp->data << endl;
    free(temp);
}
void peek()
{
    if(isEmpty())   
        cout << "Stack is UNDERFLOW. Push some elements to peek!!! :)" << endl;

    cout << "Top element is " << front->data << endl;
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