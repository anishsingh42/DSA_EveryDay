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
void display(Node * headptr)
{
    //creating a pointer that is pointing towards head and iterating forward
    Node *ptr = headptr;
    while(ptr!=NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int sizeofLL(Node *headptr){
    Node * ptr = headptr;
    int size=0;
    while(!ptr){
        size++;
        ptr=ptr->next;
    }
    return size;
}
Node * reverseLLinK(Node* &head,int k){
    //base case
    if(head == NULL)
        return NULL;
    Node * curr = head;
    Node * prev = NULL;
    Node * forward = NULL;
    if(sizeofLL(curr) < k)
        return curr;
    int cnt=0;
    while(curr!=NULL && cnt<k){
        cnt++;
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    if(forward != NULL)
        head->next = reverseLLinK(forward,k);
    return prev;
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
    display(head);
    cout << "\n";
    int k;
    cout << "K: ";
    cin >> k;
    head = reverseLLinK(head,k);
    cout <<"\n";
    cout << "LL: "<<"\n";
    display(head);
    return 0;
}