#include<bits/stdc++.h>
using namespace std;

class KQueue{
    private:
        int n;int k; int freespot;
        int *front; int *rear; int *arr; int *next;

    public:
        KQueue(int arrSize, int KQ){
            this -> n = arrSize;
            this -> k = KQ;
            front = new int[k];
            rear = new int[k];
            for(int i=0; i<k; i++) {
                front[i] = -1;
                rear[i] = -1;
            }

            next = new int[n];
            for(int i=0; i<n; i++) {
                next[i] = i+1;
            }
            next[n-1] = -1;
            arr = new int[n];
            freespot = 0;
        }


        void push(int val, int Qno){
            //condition of overflow
            if(freespot == -1){
                cout << "OverFLow Queue" << '\n';
                return;
            }

            //find the freespot index
            int index = freespot;

            //update the freespot
            freespot = next[index];

            //check whether it is first element for the Q(kth) Queue
            if(front[Qno-1] == -1)
            {
                front[Qno-1] = index;
            }
            //if not first element
            else{
                next[rear[Qno-1]] = index;
            }

            //update next
            next[index] = -1;

            //point rear to index
            rear[Qno-1] = index;

            //push the element in the arr
            arr[index] = val;
        }

        int pop(int Qno){
            //underflow
            if(front[Qno-1] == -1){
                cout << "UnderFlow Queue" << '\n';
                return -1;
            }

            // find index to pop
            int index = front[Qno-1];

            //increment front 
            front[Qno-1]  = next[index];

            //manage free slots
            next[index] = freespot;

            freespot = index;

            return arr[index];
        }
};


int main()
{
    KQueue q(8,3);
    q.push(10,1);
    q.push(20,1);
    q.push(30,1);
    q.push(110,2);
    q.push(120,2);
    q.push(1110,3);
    q.push(40,1);

    cout << q.pop(1) << '\n';
    cout << q.pop(2) << '\n';
    cout << q.pop(2) << '\n';
    cout << q.pop(1) << '\n';
    cout << q.pop(1) << '\n';
    cout << q.pop(1) << '\n';
    cout << q.pop(2) << '\n';
    cout << q.pop(3) << '\n';
    cout << q.pop(3) << '\n';
    return 0;
}