#include <bits/stdc++.h>
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

//defining a tail global variable
//pointing towards null initially but after the creation will point at the end
Node *tail = head;
void append(int value)
{
    Node *ptr = new Node;
    ptr->data = value;
    ptr->next = ptr->prev = NULL;

    //if empty condition
    if (!head)
    {
        head = tail = ptr;
        return;
    }

    //if not empty
    while (tail->next)
    {
        tail = tail->next;
    }
     //ptr prev is currently null therefore its previous node should be tail
    ptr->prev = tail;
    //tail is currently poiting towards the last element therefore its next address should be ptr
    tail->next = ptr;
    //make the next pointer of ptr null as it will be the last pointer
    // ptr->next = NULL;
    //make the tail pointer ptr as it is the last element
    tail = ptr;
}

//print the doubly linked list in forward direction
void display()
{
    //traverse the list
    //same way traversal like in singly linked list
    Node *ptrPrint = head;
    while (ptrPrint)
    {
        cout << ptrPrint->data << " ";
        ptrPrint = ptrPrint->next;
    }
}

void reverseDisplay()
{
    //traverse reverse the list using tail pointer that is pointing towards the last node
    Node *ptrTail = tail;
    while(ptrTail)
    {
        cout << ptrTail->data << " ";
        ptrTail = ptrTail->prev;
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
        append(value);
    }
 
    cout << "The Linked List is in forward display: ";
    display();
    cout << endl;

    cout << "The Linked List is in reverse display: ";
    reverseDisplay();
    cout << endl;
    return 0;
}