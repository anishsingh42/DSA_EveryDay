/*
    iterative solutions
        T.C = O(n)
        S.C = O(1)

    Recursive solutions
    (it uses functions call stack thus using implicit stacks)
        T.C = O(n)
        S.C = O(1)

*/

#include<bits/stdc++.h>
using namespace std;

//For this question I'll be using stack from STL although we can even  define our own stack and perform the reverse LL function 
struct Node
{
    int data;
    Node *next;
}*head=NULL , *tail = NULL;

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


void reverseLL()
{
    stack<Node *> S;
    if(!head) 
        return;


    //loop for push LL node
    Node *temp = head;

    while(temp)
    {
        S.push(temp);
        temp = temp->next;
    }

    //loop for pop LL node
    temp = S.top(); //point towards the last inserted node
    head = temp; //make head the last inserted node
    S.pop(); //pop the last inserted node
    //check if the LL is empty or not
    while(!S.empty())
    {
        //dry run this to understand
        temp->next= S.top();
        S.pop();
        temp=temp->next;
    }
    temp->next=NULL;
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
    cout << "The original linked list: " << endl;
    display();
    cout << endl;
    reverseLL();
    cout << "The reverse linked list: " << endl;
    display();
    return 0;
}