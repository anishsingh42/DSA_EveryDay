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

void middleNode_1(){
    Node * ptr = head;
    Node * mid = head;
    int size = 0;

    while(ptr){
        ptr = ptr->next;
        ++size;
    }
    int it = 0;
    while(2*it < size-1){
        mid = mid->next;
        it++;
    }
    head = mid;
    return;
}

void middleNode_2(){
    if(!head || !(head->next))
        return;
    else if(!(head->next->next))
    {
        head = head->next;
        return;
    }
    else{
        Node *jump2 = head->next;
        Node *jump1 = head;
        while(jump2){
            jump2 = jump2->next;
            if(jump2)
                jump2 = jump2->next;
            jump1 = jump1->next;
        }
        head = jump1;
        return;
    }
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

    middleNode_1();
    cout << "Printing after the middle element: "<<"\n";
    display();  

    middleNode_2();
    cout << "Printing after the middle element: "<<"\n";
    display();
    return 0;
}