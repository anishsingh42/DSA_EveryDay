#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node * next;
};
Node *head = NULL;
Node *tail = NULL;

void push_front(int val){
    Node *temp = new Node();
    temp->data = val;
    temp->next = NULL;

    if(!head){
        head = tail = temp;
        temp->next = head;
    }
    else{
        while(!(tail->next==head)){
            tail=tail->next;
        }
        temp->next=head;
        head=temp;
    }

}
void push_back(int val){
    Node *temp = new Node();
    temp->data = val;
    temp->next = NULL;

    if(!head)
    {
        head = temp;
        tail = temp;
        temp->next = head;
    }
    else{
        while(tail->next!=head){
            tail=tail->next;
        }
        tail->next = temp;
        temp->next = head;

    }
}
void display(){
    Node *ptr = head;
    while(ptr->next!=head){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << ptr->data <<" ";
}
int main()
{
    int n;
    cout << "Enter the size of the Linked List: ";
    cin >> n;
    int value;
    for(int i=0;i<n;i++)
    {
        cout << "Enter the number: ";
        cin >> value;
        push_back(value);
    }
    cout << endl;
    display(); cout << endl;
    cout << endl;

    for(int i=0;i<n;i++)
    {
        cout << "Enter the number: ";
        cin >> value;
        push_front(value);
    }
    cout << endl;
    display(); cout << endl;
    cout << endl;
    return 0;
}