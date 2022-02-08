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

void deleteNthPos(int pos, int n)
{
    Node *prevNode,*nextNode;
    //empty LL
    if(pos<=0 && pos>n)
        cout << "Invalid Position" << "\n";
    if(head == NULL)
    {
        cout << "Empty LL" << endl;
        return;
    }
    else if(pos == 1)
    {
        prevNode = head;
        head = prevNode->next;
        free(prevNode);
    }
    else{
        prevNode = head;
        for(int i=1;i<pos-1;i++){
            prevNode=prevNode->next;
        }
        nextNode = prevNode->next;
        prevNode->next = nextNode->next;
        free(nextNode);
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
    cout << "Enter the position: ";
    cin >> pos;
    cout << "Deleting the" << n << "th element" << endl;
    deleteNthPos(pos,n);
    cout << "The new LL is: ";
    display();
    cout << endl;
    return 0;
}