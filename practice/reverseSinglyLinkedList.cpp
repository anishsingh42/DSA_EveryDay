//Date: 11 Nov 2021
#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node * next;
}*head=NULL,*tail=NULL;

void push_back(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(!head)
        head = tail = temp;
    else{
        while(!(tail->next == NULL)){
            tail = tail->next;
        }
        tail->next = temp;
    }
}
void display()
{
    Node *ptr=head;
    while(ptr!=NULL)
    {
        cout << ptr->data << " ";
        ptr=ptr->next;
    }
    cout << "\n";
}
//iterative
void reverseSingleLL(){
    Node *currNode = head;
    Node *prevNode = NULL;
    Node *nextNode = NULL;
    while(currNode)
    {
        nextNode = currNode->next;
        currNode->next = prevNode;
        prevNode=currNode;
        currNode=nextNode;
    }
    head = prevNode;
    return;
    //T.C = O(n);
    //S.C = O(1);
}
//recursive
Node * reverseRecursive(Node *&head_ptr, Node* prev, Node *curr){
    //base case
    //curr == NULL
    if(!curr){
        head_ptr = prev;
        return head_ptr; 
    }
    Node *nextNode = curr->next;
    curr->next = prev;
    return reverseRecursive(head_ptr, curr, nextNode);
}
void reverseSingleLLRecursive(Node *ptr){
    Node *curr = head;
    Node *prev = NULL;
    reverseRecursive(head, prev, curr);
    return;
}
int main()
{
    cout << "Enter the size of LL: ";
    int n;
    cin >> n;
    int x;
    for(int i=0;i<n;i++)
    {
        cout <<"Enter the num: ";
        cin >> x;
        push_back(x);
    }
    display();

    cout << "Reverse Iteratively: " << "\n";
    reverseSingleLL();
    display();
    cout << "\n";


    cout << "Reverse Recursively: " << "\n";
    reverseSingleLLRecursive(head);
    display();
    cout << "\n";
    return 0;
}