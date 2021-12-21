#include<bits/stdc++.h>
using namespace std;

//defining the size n of the Linked List
int n;
//defining singly Linked List
struct Node
{
    int data;
    Node * next;
};

//defining a global node head pointing towards NULL signifying empty Linked List
Node * head = NULL;

//inserting at ith position in Singly Linked List
void insert(int value, int pos)
{
    //entered position is invalid
    //invalid pos = -1 , pos = n
    if(pos == -1 && pos == n)
    {
        return;
    }
    //valid postion
    Node *currNode = new Node();
    currNode->data = value;
    currNode->next = NULL;
    if(pos == 1)
    {
        currNode->next = head;
        head = currNode;
        return;
    }
    else{
        Node *prevNode = head;
        //prevNode will store the address of the one node before were the currNode needs to be inserted
        for(int i=0;i<pos-2;i++)
        {
            prevNode=prevNode->next;
        }
        //store the address of the node which was previously stored in prevNode in currNode
        currNode->next=prevNode->next;
        //link prevNode with currNode
        prevNode->next = currNode;
        return;
    }
}

void deleteNode(int pos)
{
    if(pos <= 0 && pos >= n)
        return;
    else
    {
        Node *prevNode = head;

        //is LL empty?
        if(head == NULL)
            return;
        //Deleting the first Node        
        if(pos == 1)
        {   
            head = prevNode->next;
            free(prevNode);
            return;
        }

        //deleting any element between head and tail+1
        for(int i=0;prevNode!=NULL && i<pos-2;i++)
        {
            prevNode = prevNode->next;
        }

        //deleting the last node which is null
        if(prevNode == NULL && prevNode->next==NULL)
            return;
        Node *nextNode;
        //making nextNode the node after the node that is going to be deleted
        nextNode = prevNode->next->next;
        //freeing the node that is going to be deleted
        free(prevNode->next);
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
    cout << "Enter the size of the Linked List: ";
    cin >> n;
    int value,pos;
    for(int i=0;i<n;i++)
    {
        cout << "Enter the number: ";
        cin >> value;
        cout << "Enter the position: ";
        cin >> pos;
        insert(value,pos);
    }
    // insert(2,1);
    // insert(3,2);
    // insert(4,1);
    // insert(5,2);//4 5 2 3
    cout << "The Linked List is: ";
    display();
    cout << endl;
    // cout << "Deleting the element" << endl;
    // int n;
    // cout << "Enter the Node that is to be deleted ";
    // cin >> n;
    // deleteNode(n);
    // cout << "The new LL is: ";
    // display();
    // cout << endl;
    return 0;
}

//incomplete 