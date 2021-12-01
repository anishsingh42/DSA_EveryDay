#include <bits/stdc++.h>
using namespace std;

#define maxSize 101
template <class T>
class Stacks
{
private:
    int top;
    T arr[maxSize];

public:
    //created a constructor to initialize top with -1
    Stacks()
    {
        top = -1;
    }

    void push(T value);
    T pop();
    T peek();
    bool isFull();
    bool isEmpty();
};

template <class T>
bool Stacks<T>::isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}

template <class T>
bool Stacks<T>::isFull()
{
    if (top >= maxSize)
        return true;
    else
        return false;
}

template <class T>
void Stacks<T>::push(T value)
{
    if (isFull())
    {
        cout << "Stack is OVERFLOW , no more push operation available. :(" << endl;
    }
    else
    {

        arr[++top] = value;
        // cout << "Element pushed!!!" << endl;
    }
}

template <class T>
T Stacks<T>::pop()
{
    if (isEmpty())
    {
        cout << "Stack is UNDERFLOW, push some elements to pop. :)" << endl;
    }
    else
    {
        T popElement = arr[top--];
        // cout << "The Element popped: " << popElement << endl;
        return popElement;
    }
}

template <class T>
T Stacks<T>::peek()
{
    return arr[top];
}

//take the input by reference 
void Reverse(string &str, int size)
{
    Stacks<char> S;
    //pop the elements of the string
    for(int i=0; i < size ; i++)
    {
        // char ch = str.at(i);
        S.push(str[i]);
    }
    //pop the elements and override the previous existing elements
    for(int i=0; i < size ; i++)
    {
        // char ch = str.at(i);
        str[i] = S.pop();
    }
}

template<typename X>
void reverseData(X *a, int size)
{
    Stacks<X> S1;
    //loop for push
    for(int i=0;i<size;i++)
    {
        S1.push(a[i]);
    }

    //loop for pop
    for(int i=0;i<size;i++)
    {
        a[i] = S1.pop();
    }
}


int main()
{
    string str = "HelloWorld";
    cout << "The Original String is " << str << endl;
    int sizeString = str.length();
    Reverse(str, sizeString);

    cout << "The Reverse String is " << str << endl;

    int iarr[5] = {2,3,4,5,10};
    cout << "Integer Array before reverse: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout << iarr[i] << " ";
    }
    cout << endl;
    float farr[5] = {1.2,1.21,1.22,1.23,1.24};
    cout << "Float Array before reverse: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout << farr[i] << " ";
    }
    cout << endl;


    //int arr reverse
    reverseData(iarr, 5);
    cout << "Array after reverse: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout << iarr[i] << " ";
    }
    cout << endl;

    //float arr reverse
    reverseData(farr, 5);
    cout << "Float Array after reverse: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout << farr[i] << " ";
    }
    cout << endl;
    return 0;
}


// T.C = O(N)
// and S.C = O(N)