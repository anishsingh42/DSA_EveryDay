#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
Node *tail = NULL;

void push_back(int val)
{
    Node *temp = new Node();
    temp->data = val;
    temp->next = NULL;

    if (!head)
    {
        head = temp;
        tail = temp;
        temp->next = head;
    }
    else
    {
        while (tail->next != head)
        {
            tail = tail->next;
        }
        tail->next = temp;
        temp->next = head;
    }
}
void deletePos(int pos, int n)
{
    if (pos <= 0 && pos > n)
        return;
    else
    {
        if (head == NULL)
        {
            cout << "Empty LL" << endl;
            return;
        }
        if (pos == 1)
        {
            Node *deleteNode = head;
            while(!(tail->next == head)){
                tail = tail->next;
            }
            tail->next = deleteNode->next;
            head = deleteNode->next;
            delete(deleteNode);
        }
        else if (pos == n)
        {
            Node *secondLastptr = head;
            while (!(secondLastptr->next->next == head))
            {
                secondLastptr = secondLastptr->next;
            }
            Node *deleteNode = secondLastptr->next;
            secondLastptr->next = head;
            delete (deleteNode);
        }
        else
        {
            Node *ptr = head;
            for (int i = 1; i < pos - 1; i++)
            {
                ptr = ptr->next;
            }
            Node *deleteNode = ptr->next;
            ptr->next = deleteNode->next;
            delete (deleteNode);
        }
    }
}
void display()
{
    Node *ptr = head;
    while (ptr->next != head)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << ptr->data << " ";
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
        push_back(value);
    }
    cout << endl;
    display();
    cout << endl;
    cout << endl;

    int pos;
    cout << "Enter the position: ";
    cin >> pos;
    cout << "Deleting the " << pos << " th element" << endl;
    deletePos(pos, n);
    cout << "The new LL is: ";
    display();
    cout << endl;
    return 0;
}