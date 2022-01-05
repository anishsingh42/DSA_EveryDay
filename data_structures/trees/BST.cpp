#include<bits/stdc++.h>
using namespace std;
/*
    A) Tree Basic Concepts

        1. Node : Finite set of elements 
        2. Branch : Finite set of directed lines
        3. Parent : The node from which sub-nodes are derived.
        4. Child: The subNode derived from parent.
        5. Siblings: The child having same parent.
        5. Cousins: Same level but different parents.
        6. Leaves: The node with no child is leave, also genrally the last node.
        7. Internal Node: A node acting as parent as well as child
        8. Root: The parent element is called the root element.

    B) Binary tree: 
        1. at-most 2 children ranging from 0,1 or 2 subtrees. These subtrees are designated as leftSubtree of rightSubtree.
        2. Height of a binary tree: Is the longest downward path from the node to the leave node.
        Height of the empty tree = -1
        Height of the tree with only one element = 0
        Height of the root node = Height of the tree

        3. Depth of a binary tree: Is the longest upward path taken from the leave to the node.
        Depth of a empty tree = -1
        Depth of the tree with only one element = 0
        Depth of the tree - Depth of the root node

        Note: Height of the tree = Depth of the tee = Height of the root Node = Depth of the root node.

        4. Maximum Height of the tree with N nodes is => Hmax = N
           Minimum height of the tree with N nodes is => Hmin = (logN) + 1  [Base 2 log]
           If height of the tree is known
                Nmax = H
                Nmin = 2^H - 1

    C) Full or Strict Binary Tree
        1. Either 0 or 2 children.
    D) Almost Complete Binary Tree
        1. Every node will have 0,1 or 2 childs but filling of childs will perfrom from left to right, keeping in mind that the current level is already filled.
    E) Complete/Perfect Binary Tree
        1. Will have exactly 2 child in every node except the leaf node.
*/

//Linked List Implementation
struct BSTNode
{
    BSTNode * left;
    int data;
    BSTNode * right;
};

//this function will create a new node and return back the address to the newly created node 
BSTNode* getNewNode(int value)
{
    BSTNode *newNode = new BSTNode;
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    
    return newNode;
}

BSTNode* insert(BSTNode *rootptr,int value)
{
    //this newNode is not related to the above delcared newNode in getNewNode() ... both are local variables and independent to each other
    BSTNode * newNode = getNewNode(value);

    //cases for insertion 

    //case 1 entire tree is empty hence rootptr is NULL
    if(!rootptr)
        rootptr = newNode;
    //case 2 tree is not empty
    //we will use recursion
    //case 2a inserted element is lesser than or equal to root ==> insert it in the left BST
    else if(value <= rootptr->data)
        rootptr->left = insert(rootptr->left,value);
    //case 2b inserted element is greater than the root ==> insert it in the right BST
    else 
        rootptr->right = insert(rootptr->right,value);

    return rootptr;

}


bool searchNode(BSTNode *root,int value)
{
    //tree is empty
    if(!root) return false;
    //root is the element user is searching for
    else if(root->data == value) return true;
    //value is lesser than or equal to root
    else if(value <= root->data) return searchNode(root->left,value);
    //value is greater than the root
    else return searchNode(root->right,value);
}


int elementMin(BSTNode *root)
{
    BSTNode* current  = root;
    if(current->left == NULL)
        cout << "Empty Tree"<<endl;
    while(current->left !=NULL)
        current = current->left;

    return current->data;
}
/*
recursive solution

int elementMin(BSTNode *root)
{
    if(root==NULL){
        cout << "Empty root"
        return -1;
    }
    else if(root->left == NULL)
        return root->data;

    return elementMin(root->left);
}

*/
int elementMax(BSTNode *root)
{
    BSTNode* current  = root;
    if(current->right == NULL)
        cout << "Empty Tree"<<endl;
    while(current->right !=NULL)
        current = current->right;

    return current->data;
}


int heightTree(BSTNode *root)
{
    //height of the tree is equal to height of the root node 
    
    //height of only one node  = height of root node  = 0

    //height of empty tree = -1

    if(root == NULL)
        return -1;

    return max(heightTree(root->left), heightTree(root->right))+1;
}

/*
    tree values
                    5
            2               8
                4       6       9
                                    10

    values = 5,8,6,2,4,9,10
    Binary Tree Traversal 
        1. Breadth First Traversal
            Also known as Level Order Traversal
                5->2->8->4->6->->9->10
        2. Depth First Traversal
            2a. inorder (Left-Data-Right)
                <left><root><right>
            2b. postorder (Left-Right-Data)
                <left><right><root>
            2.c preorder (Data-Left-Right)
                <root><left><right>

*/

void BreadthFirstTraversal(BSTNode *root)
{
    //int levelOrder Traversal there is no way to traverse sideways therefore we use another dataStructures called Queuesto store the address of the node

    //using queue here is an advantage 
        //1. queue follows FIFO rule thus the node that enters first its data is printed first and its children are visited first 
        //thus in this way we are no losing the address or reference to the adjacent or previous node

    //if the root is empty return
    if(!root) return;

    queue<BSTNode *> q;

    //initially push the first node in the queue
    q.push(root);

    //while there is alleast one element left
    while(!q.empty())
    {
        //store the top element in current
        BSTNode * current = q.front();
        //print the current data
        cout << current->data << " ";
        //if the left != NULL push in the queue
        if(current->left != NULL) q.push(current->left);
        //if the right != NULL push in the queue
        if(current->right != NULL) q.push(current->right);

        //pop the current element whos viewing is already done
        q.pop();


        //T.C = we are visiting the node only once therefore T.C is proportional to the number of the node
        //T.C = O(n);
        //S.C = O(n)
    }
}

void inorderTraversal(BSTNode *root)
{ //LDR
    if(root==NULL) return;  
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
    //T.C = O(n)
}
void preorderTraversal(BSTNode *root)
{ //DLR
    if(root==NULL) return;  
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
    //T.C = O(n)
}
void postorderTraversal(BSTNode *root)
{ //LRD
    if(root==NULL) return;    
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
    //T.C = O(n)
}

BSTNode * findMin(BSTNode *root)
{
    BSTNode* current  = root;
    if(current->left == NULL)
        cout << "Empty Tree"<<endl;
    while(current->left !=NULL)
        current = current->left;

    return current;
}
//search function to search a key element
int searchKey(int a[], int key, int n)
{
    for(int i=0;i<n;i++)
        if(a[i] == key)
            return i;
    return -1;
}
//Array implementation of postorder from given inorder preorder
void  printPostOrder(int in[], int pre[], int n)
{
    //the first element in preorder is the root element
    //locate the root index in the inorder array , i.e in[]
    int root = searchKey(in,pre[0],n);

    //Now traverse the left part of the inorder
    if(root!=0)
        printPostOrder(in,pre+1,root);
    //Now traverse the right part of the  inorder
    if(root!=(n-1))
        printPostOrder(in+root+1, pre+root+1, n-root-1);

    //print the root
    cout << pre[0] << " "; 
}

void  printPreOrder(int in[], int post[], int n)
{
    //the last element in postorder is the root element
    //locate the root index in the inorder array , i.e in[]
    int root = searchKey(in,post[n-1],n);

    //print the root
    cout << post[n-1] << " "; 

    //Now traverse the left part of the inorder
    if(root!=0)
        printPreOrder(in,post+1,root);
    //Now traverse the right part of the  inorder
    if(root!=(n-1))
        printPreOrder(in+root+1, post+root+1, n-root-1);

    
}
BSTNode* deleteNode(BSTNode * root, int value)
{
    //while deleting a node in BST the property of BST should be reserved

    //deleting a leaf node wont cause any errors

    //deleting a no leaf node will create error therfore :
        //case 1 one child ---> connect the parent to the previous ancestor
        //case 2 two child --> reduce it to case 1 or case 0

        //in case 2 there are 2 ways 
        //i) find the minimum in the right BST of the going to be deleted node
        //ii) find the max in the left BST of going to be deleted node


        if(root == NULL) return root;
        else if(value < root->data) root->left = deleteNode(root->left,value);
        else if(value > root->data) root->right = deleteNode(root->right,value);
        else{
            //value found
            //needs to be delete

            //case 0 no child
            if(root->left == NULL && root->right == NULL) {
                delete root;
                root = NULL;
                return root;
            }

            //case 1 one child
            else if(root->left == NULL)
            {
                BSTNode *temp = root;
                root = root->right;
                delete temp;
                return root;
            }

            else if(root->right == NULL)
            {
                BSTNode *temp = root;
                root = root->left;
                delete temp;
                return root;
            }

            //case 2 two children
            BSTNode * temp = findMin(root->right);
            //make the min value the current root value
            root->data = temp->data;
            //delete
            root->right = deleteNode(root->right,temp->data);

        }


}

int main()
{
    //the identity of the entire tree is stored in address to the root node and setting it to NULL means tree is empty
    BSTNode *rootptr = NULL;

    int choice,value;
    // init();
    while(1)
    {
        cout << "0. Exit" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Search" << endl;
        cout << "4. MAX/MIN element in tree" << endl;
        cout << "5. Height of the tree" << endl;
        cout << "6. Level order Traversal" << endl;
        cout << "7. Depth First Traversal (Inorder)" << endl;
        cout << "8. Depth First Traversal (Preorder)" << endl;
        cout << "9. Depth First Traversal (Postorder)" << endl;
        cout << "10. PostOrder from given Inorder and PreOrder. " << endl;
        cout << "11. PreOrder from given Inorder and PostOrder. "<<endl;

        cout << "Enter you Choice: ";
        cin >> choice;
        switch(choice)
        {
            case 0: exit(0); break;

            case 1: cout << "Enter the value that needs to be inserted: ";
            cin >> value;
            rootptr = insert(rootptr,value);
            cout << endl;
            break;

            case 2: cout << "Enter the value that needs to be deleted: ";
            cin >> value;
            deleteNode(rootptr,value);
            cout << endl;
            break;

            case 3: cout << "Enter the value that needs to be searched: ";
            cin >> value;
            if(searchNode(rootptr,value)) cout << "Found the element" << endl;
            else cout << "Not found" << endl;
            cout << endl;
            break;

            case 4: cout << "Max element in the tree is : "<< elementMax(rootptr) << endl;
           cout << "Min element in the tree is : "<< elementMin(rootptr) << endl;
           cout << endl;
            break;

            case 5: cout << "Height of the tree is : " <<heightTree(rootptr) << endl;
            cout << endl;
            break;

            case 6: BreadthFirstTraversal(rootptr);
            cout << endl;
            cout << endl;
            break;

            case 7: inorderTraversal(rootptr);
            cout << endl;
            break;

            case 8: preorderTraversal(rootptr);
            cout << endl;
            break;

            case 9: postorderTraversal(rootptr);
            cout << endl;
            break;

            case 10: int s; cout << "Size of Tree "; cin >> s; int inP[s]; int preP[s];
            cout << "Inorder : "<<endl;
            for(int i=0;i<s;i++)
            {
                cin >> inP[i];
            }
            cout << "Preorder : "<<endl;
            for(int i=0;i<s;i++)
            {
                cin >> preP[i];
            }
            cout << endl;
            printPostOrder(inP,preP,s);
            cout << endl;
            break;
            
            // case 11: int s1; cout << "Enter the size "; cin >> s1; int inp[s1]; int postp[s1];
            // cout << "Inorder "<<endl;
            // for(int j=0;j<s1;j++)
            //     cin >> inp[j];
            // cout << "Post order" << endl;
            // for(int j=0;j<s1;j++)
            //     cin >> postp[j]; 
            // cout << endl;
            // printPreOrder(inp,postp,s1);
            // cout<<endl;
            // break;
        }
    }
    return 0;
}