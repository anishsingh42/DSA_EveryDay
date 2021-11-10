#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
    data = x;
    next = NULL;
  }
};

bool isPalindrome(Node *head)
{
        //pointer
        Node* slow= head;
 
        // Declare a stack
        stack <int> s;
  
 
        // Push all elements of the list
        // to the stack
        while(slow != NULL){
                s.push(slow->data);
                // Move ahead
                slow = slow->next;
        }
 
        // Iterate in the list again and
        // check by popping from the stack
        while(head != NULL ){
             
            // Get the top most element
             int i=s.top();
 
             // Pop the element
             s.pop();
 
             // Check if data is not
             // same as popped element
            if(head -> data != i){
                return false;
            }
 
            // Move ahead
           head=head->next;
        }
 
    return true;
}


int main()
{
    struct Node *head=NULL,*tail=NULL;
    int n,firstdata,value;
    cin >> n;
    cin >> firstdata;
    head = new Node(firstdata);
    tail=head;

    for(int i=0;i<n;i++)
    {
        cin >> value;
        tail->next = new Node(value);
        tail=tail->next;
    }

    cout << isPalindrome(head);
return 0;
}