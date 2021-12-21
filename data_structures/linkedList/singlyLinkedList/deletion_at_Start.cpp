#include <bits/stdc++.h>
using namespace std;

//defining a singly linked list
struct Node
{
    int data;
    Node *next;
};

//defining a global node head pointing towards NULL signifying empty Linked List
Node *head = NULL;

//push at the start of the singly Linked List
void push(int value)
{
    //create a temp node to store the data
    Node *temp = new Node();
    temp->data = value;
    //temp is pointing towards head
    //head is null at start hence writing temp->next = head also covers the empty list case
    temp->next = head;
    //making the newly inserted node head
    head = temp;
}

void deleteBeg()
{
    Node *ptr = head;
    //empty LL
    if (head == NULL)
        cout << "Empty LL" << endl;
    else
    {
        //make head point to the next node
        head = ptr->next;
        //free the first node
        free(ptr);
        return;
    }
}
void display()
{
    //creating a pointer that is pointing towards head and iterating forward
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int main()
{
    int n;
    cout << "Enter the size of the Linked List: ";
    cin >> n;
    int value;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number: ";
        cin >> value;
        push(value);
    }
    cout << "The Linked List is: ";
    display();
    cout << endl;
    cout << "Deleting the first element" << endl;
    deleteBeg();
    cout << "The new LL is: ";
    display();
    cout << endl;
    return 0;
}