#include<bits/stdc++.h>
using namespace std;

//defining a doubly linked list
struct Node
{
    Node *prev;
    int data;
    Node *next;
};

//defining a head global variable
//poiting towards null ... hence stating empty node
Node *head = NULL;

void push(int value)
{
    Node *ptr = new Node;
    ptr->data = value;
    ptr->next = NULL;
    ptr->prev = NULL;
    //check whether intially the LL is empty or not
    //if yes then ...
    if(head==NULL)
    {
        head = ptr;
        return;
    }
    //if not empty then 
    //push the node at the start of the LL
    head->prev = ptr;
    ptr->next = head;
    head = ptr;
    return;
}

//print the doubly linked list in forward direction 
void display()
{
    //traverse the list
    //same way traversal like in singly linked list
    Node *ptrPrint = head;
    while(ptrPrint)
    {
        cout << ptrPrint->data << " ";
        ptrPrint=ptrPrint->next;
    }
}


int main()
{
    int n;
    cout << "Enter the size of the Linked List: ";
    cin >> n;
    int value;
    for(int i=0;i<n;i++)
    {
        cout << "Enter the number: ";
        cin >> value;
        push(value);
    }
 
    cout << "The Linked List is: ";
    display();
    cout << endl;
    return 0;
}