//Date: 11 Nov 2021
#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node * next;
}*head=NULL,*tail=NULL;
void insert(int x)
{
    Node * temp=new Node;
    temp->data=x;
    temp->next=NULL;
    while(head!=NULL)
    {
        temp->next=tail;
        tail=temp;
    }
}
void print()
{
    Node *ptr=head;
    while(ptr!=NULL)
    {
        cout << ptr->data;
        ptr=ptr->next;
    }
}
// Node reverseSinglyLinkedList()
// {

// }
int main()
{
    int n;
    cin >> n;
    int x;
    for(int i=0;i<n;i++)
    {
        cout <<"Enter the num: ";
        cin >> x;
        insert(x);
    }
    print();
    return 0;
}