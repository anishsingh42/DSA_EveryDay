//Date: 22nd Nov 2021

#include<bits/stdc++.h>
using namespace std;

void pattern1()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;

    /*
        1 2 3 4 
        1 2 3 4 
        1 2 3 4 
        1 2 3 4

        row = size;
        col = 1 -> size
    */
   int row = 1,col = 1;

   while(row<=size)
   {
       while(col<=size)
       {
           cout << col <<" ";
           col++;
       }
       cout << endl;
       col = 1;
       row++;
   }

}

void pattern2()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;

    /*
        4 3 2 1
        4 3 2 1
        4 3 2 1
        4 3 2 1

        row = 1;
        col = 1-->(n-j+1)
    */
   cout << "Approach 1:"<<endl;
   int row = 1;
   int col = 1;
   while(row<=size)
   {
       while(col<=size)
       {
           cout << (size-col+1) << " ";
           col++;
       }
       col = 1;
       cout << endl;
       row++;
   }
    cout << "Approach 2:"<<endl;
    /*
        4 3 2 1
        4 3 2 1
        4 3 2 1
        4 3 2 1

        row = 1;
        col = n -> 1
    */
   row = 1;
   col = size;
   while(row<=size)
   {
       while(col>=1)
       {
           cout << col << " ";
           col--;
       }
       col = size;
       cout << endl;
       row++;
   }

}


void pattern3()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;

    /*
        01 02 03 04         i=1
        05 06 07 08         i=2
        09 10 11 12         i=3
             
    j = 01 02 03 04
        simple counting
    */
   int row = 1;
   int col = 1;
   int count=1;
   while(row<=size)
   {
       while(col<=size)
       {
           cout << count << " ";
           count++;
           col++;
       }
       col = 1;
       cout << endl;
       row++;
   }
   
}

void pattern4()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;

    char symbol;
    cout << "Enter the character that you want to print: ";
    cin >> symbol;

    /*
        x       i=1
        x x     i=2
        x x x   i=3
    j = 1 2 3

        i=1;
        j= 1->i

    */

   int row=1;
   while(row<=size)
   {
       int col=1;
       while(col<=row)
       {
           cout << symbol << " ";
           col++;
       }
       cout<<endl;
       row++;
   }
}

void pattern5()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;

    /*
        1
        2 2
        3 3 3 
        4 4 4 4 
    */

   int row=1;
   while(row<=size)
   {
       int col=1;
       while(col<=row)
       {
           cout << row <<" ";
           col++;
       }
       cout<<endl;
       row++;
   }
}

void pattern6()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;

    /*
        1
        2 3
        4 5 6 
        7 8 9 10 
    */

   int row=1;
   int count=1;
   while(row<=size)
   {
       int col=1;
       while(col<=row)
       {
           cout << count <<" ";
           count++;
           col++;
       }
       cout<<endl;
       row++;
   }
}

void pattern7()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;

    /*
        1           i=1
        2 3         i=2
        3 4 5       i=3
        4 5 6 7     i=4

    */
   cout <<"Approach 1: "<<endl;
   int row=1;
   int count=0;
   while(row<=size)
   {
       int col=1;
       count=row;
       while(col<=row)
       {
           cout << count <<" ";
           count++;
           col++;
       }
       cout<<endl;
       row++;
   }

   cout <<"Approach 2: "<<endl;
   row=1;
   while(row<=size)
   {
       int col=1;
       while(col<=row)
       {
           cout<<(row+col-1)<<" ";
           col++;
       }
       cout<<endl;
       row++;
   }
}

void pattern8()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;
    /*
        1
        2 1
        3 2 1
        4 3 2 1
    */
   cout <<"Approach 1: "<<endl;
   int row=1;
   int count=0;
   while(row<=size)
   {
       int col=1;
       count=row;
       while(col<=row)
       {
           cout << count <<" ";
           count--;
           col++;
       }
       cout<<endl;
       row++;
   }

   cout <<"Approach 2: "<<endl;
   row=1;
   while(row<=size)
   {
       int col=1;
       while(col<=row)
       {
           cout << (row-col+1)<<" ";
           col++;
       }
       cout<<endl;
       row++;
   }
}

void pattern9()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;
    /*
        A A A
        B B B
        C C C
    */
   int row=1;
   while(row<=size)
   {
       int col=1;
       while(col<=size)
       {
           char ch = 'A'+row-1;
           cout << ch << " ";
           col++; 
       }
       cout << endl;
       row++;
   }
}

void pattern10()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;
    /*
        A B C D
        A B C D
        A B C D
        A B C D
    */
   int row=1;
   while(row<=size)
   {
       int col=1;
       while(col<=size)
       {
           char ch = 'A'+col-1;
           cout << ch << " ";
           col++; 
       }
       cout << endl;
       row++;
   }
}

void pattern11()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;
    /*
        A B C D
        E F G H
        I J K L 
        M N O P 
    */
   int row=1;
   char ch='A';
   while(row<=size)
   {
       int col=1;
       while(col<=size)
       {
           cout << ch << " ";
           ch++;
           col++; 
       }
       cout << endl;
       row++;
   }
}

void pattern12()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;
    /*
        A B C
        B C D
        C D E
    */

    int row=1;
    while(row<=size)
    {
        int col=1;
        while(col<=size)
        {
            char ch = 'A'-1 + row+col-1;//'A'-1 to obtain 'A' and row+col-1 to get initial number to be row number and count forwards
            cout << ch << " ";
            col++;
        }   
        row++;
        cout << endl;
    }
}

void pattern13()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;

    /*
        A
        B B
        C C C
    */

   int row=1;
   while(row<=size)
   {
       int col=1;
       while(col<=row)
       {
           char ch = 'A'+row-1;
           cout << ch <<" ";
           col++;
       }
       cout<<endl;
       row++;
   }
}

void pattern14()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;

    /*
        1
        2 3
        4 5 6 
        7 8 9 10 
    */

   int row=1;
   int count=1;
   while(row<=size)
   {
       int col=1;
       while(col<=row)
       {
           char ch = 'A'+count-1;
           cout << ch <<" ";
           count++;
           col++;
       }
       cout<<endl;
       row++;
   }
}
void pattern15()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;
    
    char symbol;
    cout << "Enter the character that you want to print: ";
    cin >> symbol;


    /*

        @ 
       @ @ 
      @ @ @ 
     @ @ @ @ 
    @ @ @ @ @ 

    */
   int row=1;
   while(row<=size)
   {
       int space = size-row;
       while(space)
       {
           cout << " ";
           space--;
       }
       int col = 1;
       while(col<=row)
       {
           cout << symbol << " ";
           col++;
       }
       cout << endl;
       row++;
   }
}


void pattern16()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;
    
    char symbol;
    cout << "Enter the character that you want to print: ";
    cin >> symbol;


    /*
    
           #
          ##
         ###
        ####

    */
   int row=1;
   while(row<=size)
   {
       int space = size-row;
       while(space)
       {
           cout << " ";
           space--;
       }
       int col = 1;
       while(col<=row)
       {
           cout << symbol;
           col++;
       }
       cout << endl;
       row++;
   }
}


void pattern17()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;
    
    char symbol;
    cout << "Enter the character that you want to print: ";
    cin >> symbol;

    /*
        x x x x
        x x x 
        x x 
        x
    */
   int row=1;
   while(row<=size)
   {
       int symbols = size-row+1;//cause the row is starting from 1 we are adding 1 .. if the row had started from 0 no need to add 1;
       while(symbols)
       {
           cout << symbol;
           symbols--;
       }
       cout << endl;
       row++;
   }

}


void pattern18()
{
    int size;
    cout << "Enter the row size: ";
    cin >> size;
    
    char symbol;
    cout << "Enter the character that you want to print: ";
    cin >> symbol;

    /*
        x x x x
          x x x 
            x x 
              x
    */
   int row=1;
   while(row<=size)
   {
       int symbols = size-row+1;//cause the row is starting from 1 we are adding 1 .. if the row had started from 0 no need to add 1;
       int space = size-symbols;
       while(space)
       {
           cout << " ";
           space--;
       }
       while(symbols)
       {
           cout << symbol;
           symbols--;
       }
       cout << endl;
       row++;
   }

}
int main()
{
    // cout << "Pattern 1: " << endl;
    // pattern1();

    // cout << "Pattern 2: " << endl;
    // pattern2();

    // cout << "Pattern 3: " << endl;
    // pattern3();

    // cout << "Pattern 4: " << endl;
    // pattern4();

    // cout << "Pattern 5: " << endl;
    // pattern5();

    // cout << "Pattern 6: " << endl;
    // pattern6();

    // cout << "Pattern 7: " << endl;
    // pattern7();

    // cout << "Pattern 8: " << endl;
    // pattern8();

    // cout << "Pattern 9: " << endl;
    // pattern9();

    // cout << "Pattern 10: " << endl;
    // pattern10();

    // cout << "Pattern 11: " << endl;
    // pattern11();

    // cout << "Pattern 12: " << endl;
    // pattern12();
    
    // cout << "Pattern 13: " << endl;
    // pattern13();
    
    // cout << "Pattern 14: " << endl;
    // pattern14();

    
    // cout << "Pattern 15: " << endl;
    // pattern15();

    // cout << "Pattern 16: " << endl;
    // pattern16();

    // cout << "Pattern 17: " << endl;
    // pattern17();

    cout << "Pattern 18: " << endl;
    pattern18();
    return 0;
}