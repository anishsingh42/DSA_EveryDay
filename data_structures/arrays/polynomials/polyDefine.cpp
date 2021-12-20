#include<bits/stdc++.h>
using namespace std;


//method 1
#define maxSize 101
typedef struct
{
    int degree;
    float coeff[maxSize];
}polynomial;


//method 2
typedef struct
{
    int degree;
    float coeff;
}polynomials;

int main()
{
    //method 1
    int n;
    cout << "What is the degree of the polynomial: ";
    cin >> n;

    polynomial poly1;

    for(int i=n;i>=0;i--)
    {
        poly1.degree = i;
        float temp;
        cout << "Coeff for x^" << poly1.degree << ": ";
        cin >> temp;
        poly1.coeff[i] = temp;
    }

    cout << "Polynomial 1 is: " << endl;
    for(int i=n;i>=0;i--)
    {
        poly1.degree = i;
        cout << poly1.coeff[i] << "x^" << poly1.degree << " ";
    }
    cout << endl;

    //method 2

    polynomials poly2[n+1];

    for(int i=n;i>=0;i--)
    {
        poly2[i].degree= i;
        float temp;
        cout << "Coeff for x^" << poly2[i].degree << ": ";
        cin >> temp;
        poly2[i].coeff = temp;
    }

    cout << "Polynomial 2 is: " << endl;
    for(int i=n;i>=0;i--)
    {
        cout << poly2[i].coeff << "x^" << poly2[i].degree << " ";
    }
    return 0;
}