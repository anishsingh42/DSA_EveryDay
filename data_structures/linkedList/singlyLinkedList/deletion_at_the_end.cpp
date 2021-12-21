#include<bits/stdc++.h>
using namespace std;

//defining singly Linked List
struct Node
{
    int data;
    Node * next;
};

//defining a global node head pointing towards NULL signifying empty Linked List
Node * head = NULL;
//defining a global node tail pointing towards NULL will point to the end node in Linked List
Node * tail = NULL;

//append always inserts the node at the end of the singly Linked List 
void append(int value)
{
    //create a new node
    Node *temp=new Node();
    temp->data=value;
    temp->next=NULL;
    //if head is NULL, it is an empty list
    if(head == NULL)
        head = tail = temp;
    //Otherwise, find the tail and add the temp
    else
    {
        // tail = head;

        //last node's next address will be NULL.
        while(tail->next != NULL)
        {
            tail = tail->next;
        }

        //add the temp at the end of the linked list
        tail->next = temp;
    }

} 

void deleteEnd()
{
    Node *prevNode,*nextNode;
    //empty LL
    if(head == NULL)
    {
        cout << "Empty LL" << endl;
        return;
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else{
        prevNode=head;
        nextNode = head->next;
        while(nextNode->next!=NULL)
        {
            prevNode = nextNode;
            nextNode = nextNode->next;
        }
        //nextNode = endNode and prevNode = one node before end Node
        //delete nextNode
        delete nextNode;
        //prevNode->next = NULL; destroying Link
        prevNode->next = NULL;
    }
}
void display()
{
    //creating a pointer that is pointing towards head and iterating forward
    Node *ptr = head;
    while(ptr!=NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}


int main()
{
    int n;
    cout << "Enter the size of the Linked List: ";
    cin >> n;
    int value,pos;
    for(int i=0;i<n;i++)
    {
        cout << "Enter the number: ";
        cin >> value;
        append(value);
    }
    cout << endl;
    display(); cout << endl;
    cout << "Deleting the last element" << endl;
    deleteEnd();
    cout << "The new LL is: ";
    display();
    cout << endl;
    return 0;
}