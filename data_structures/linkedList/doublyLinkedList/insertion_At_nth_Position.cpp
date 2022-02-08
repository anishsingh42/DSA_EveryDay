#include<bits/stdc++.h>
using namespace std;

//defining doubly LL
struct Node
{
    Node *prev;
    int data;
    Node *next;
};

//defining the headptr;
Node *head = NULL;

void push_pos(int pos, int n, int val){
    if(pos<=0 && pos>=n)
        return;
    else{
        Node *temp = new Node;
        temp->data = val;
        temp->next = temp->prev = NULL;
        if(!head)
        {
            head = temp;
            return;
        }
        if(pos == 1)
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
            return;
        }
        else
        {
            Node *ptr = head;
            for(int i=1;i<pos-1;i++){
                ptr = ptr->next;
            }
            temp->prev = ptr;
            temp->next = ptr->next;
            ptr->next = temp;
            return;
        }
    }
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

int main()
{
    int n;
    cout << "Enter the size of the Linked List: ";
    cin >> n;
    int value;
    int pos;
    for(int i=0;i<n;i++)
    {
        cout << "Enter the number: ";
        cin >> value;
        cout << "Position: ";
        cin >> pos;
        push_pos(pos, n, value);
    }
 
    cout << "The Linked List is in forward display: ";
    display();
    cout << endl;
    return 0;
}