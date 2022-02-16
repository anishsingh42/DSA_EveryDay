#include <map>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *removeDuplicates(Node *head)
{
    // Write your code here
    map<int, bool> visited;
    Node *curr = head->next;
    Node *prev = head;
    visited[prev->data] = true;
    while (curr != NULL)
    {
        if (visited[curr->data] == true)
        {
            prev->next = curr->next;
            Node *del = curr;
            delete (del);
        }
        else
        {
            visited[curr->data] = true;
            prev = prev->next;
        }
        curr = curr->next;
    }
    return head;
}