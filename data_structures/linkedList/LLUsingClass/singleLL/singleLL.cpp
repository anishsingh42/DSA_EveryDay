#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node * next;
        //Initialize
        // Node();
        Node(int val);
};

//Initialize
/*
Node :: Node(){
    this -> next = NULL;
    this -> data = 0;
}
*/
Node :: Node(int val){
    this -> next = NULL;
    this -> data = val;
}
Node * headptr = NULL;
Node * tailptr = NULL;

void display(){
    Node *ptr = headptr;
    while(ptr!=NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << "\n";
}


void push_front(int val){
    Node *temp = new Node(val);
    temp->next = headptr;
    headptr = temp;
}

void push_back(int val){
    Node *temp = new Node(val);
    if(headptr == NULL)
        headptr = tailptr = temp;

    else{
        while(tailptr->next!=NULL){
            tailptr=tailptr->next;
        }
        tailptr->next=temp;
    }
}
int main()
{
    
    cout << "Entering elements in the front" << "\n";
    for(int i=0;i<5;i++){
        int t;
        cin >> t;
        push_front(t);
    }
    cout << "\n";
    display();

    cout << "Entering elements in the back" << "\n";
    for(int i=0;i<5;i++){
        int t;
        cin >> t;
        push_back(t);
    }
    cout << "\n";
    display();
    return 0;
}