#include<bits/stdc++.h>
using namespace std;

typedef struct
{
    int row;
    int col;
    int value;
}term;

int main()
{
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    int ch;
    int end = 2*n;
    int counter=0,i=-1;
    term a[2*n];
    while(end)
    {
        cout << "1. Enter the element." << endl << "0. Exit. " << endl;
        cin >> ch;
        switch (ch)
        {
            case 0: break;
            case 1: int r,c,v; 
                    cout << "Row ";
                    cin >> r;
                    cout << "Col ";
                    cin >> c;
                    cout << "Val ";
                    cin >> v;
                    i++;
                    a[i].row=r;a[i].col=c;a[i].value=v;
                    break;
        }
        counter++;end--;
    }

    for(int i=0;i<counter;i++)
    {
        cout << a->row <<" "<< a->col <<" "<< a->value <<endl;
    }
    return 0;
}