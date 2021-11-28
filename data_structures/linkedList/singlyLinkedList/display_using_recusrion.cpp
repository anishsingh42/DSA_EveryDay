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

//recursive call ... dispplay in forward manner
void displayForward(Node *ptr)
{
    if(!ptr) 
        return;
    cout << ptr->data << " ";
    displayForward(ptr->next);
}

//recursive call ... dispaly in reverse manner
void  displayReverse(Node *ptr)
{
    if(!ptr) 
        return;
    displayReverse(ptr->next);
    cout << ptr->data << " ";
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

    cout << "Recursive method forward display: ";
    displayForward(head);
    cout << endl;

    cout << "Recursive method reverse display: ";
    displayReverse(head);
    cout << endl;
    
    return 0;
}