#include <bits/stdc++.h>
using namespace std;

//array implementation
//define the size of the queue
#define maxSize 101                 
//static linear array

/*
    fundamental operations
        1. push(x) or enqueue(x)
        2. pop() or dequeue
        3. peek()
        4. isEmpty()
        5. isFull()
        6. init()
*/
struct Queue
{
    int front;
    int rear;
    int staticQueueArr[maxSize];
}QueueStatic;

void init()
{
   QueueStatic.front = QueueStatic.rear = -1;
}
bool isEmpty()
{
    if ((QueueStatic.front == -1) && (QueueStatic.rear == -1))
        return true;
    else
        return false;
}

bool isFull()
{
    //check whether the every next element is front or not is yes it means queue is full
    if ((QueueStatic.rear + 1)%maxSize == QueueStatic.front)
        return true;
    else
        return false;
}
void push(int value)
{
    if (isFull())
    {
        cout << "Queue is OVERFLOW , no more push operation available. :(" << endl;
    }
    else
    {
        if(QueueStatic.front == -1)
            QueueStatic.front=0;
        
        QueueStatic.rear = (QueueStatic.rear+1)%maxSize;
        QueueStatic.staticQueueArr[QueueStatic.rear] = value;
        
        cout << "Element pushed!!!" << endl;
    }
}

int pop()
{
    if (isEmpty() || QueueStatic.front > QueueStatic.rear)
    {
        cout << "Queue is UNDERFLOW, push some elements to pop. :)" << endl;
    }
    else
    {
        int popElement = QueueStatic.staticQueueArr[QueueStatic.front];
        QueueStatic.front = (QueueStatic.front + 1)%maxSize;
        cout << "The Element popped: " << popElement << endl;

    }
}
int peek()
{
    return QueueStatic.staticQueueArr[QueueStatic.front];
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

            case 3: if(isEmpty()) cout << "Queue is empty!!!" << endl;
            else cout << "Queue is not empty!!!" <<endl;
            break;

            case 4: if(isFull()) cout << "Queue is full!!!" << endl;
            else cout << "Queue is not full!!!" <<endl;
            break;

            case 5: cout << "The Top element is " << peek() << endl;
            break;
        }
    }
    return 0;
}