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

//using iterative method 
Node * reverseLL(Node *head_ptr)
{
    head_ptr = head;
    Node *prevNode, *currentNode, *nextNode;
    prevNode = NULL;
    currentNode = head;

    while(currentNode)
    {
        nextNode = currentNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }
    head = prevNode;
    return head_ptr;
}


//using recursive method 
//better method
void reverseLLrecursive(Node *ptr)
{
    if(!ptr->next)
    {
        head = ptr;
        return;
    }
    reverseLLrecursive(ptr->next);
    
    Node* nextNode = ptr->next;
    nextNode->next = ptr;
    ptr=NULL;
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
    cout << "LL before reverse: "<<endl;
    display();
    cout << endl;
    cout <<"LL after reverse: "<<endl;
    reverseLL(head);
    display();
    return 0;
}