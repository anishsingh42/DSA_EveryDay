#include<bits/stdc++.h>
using namespace std;

typedef struct
{
    int degree;
    float coeff;
}polynomials;

int max(int m, int n) {  return (m > n)? m: n; }

void polyAdd(polynomials a[], int n, polynomials b[], int m, polynomials c[], int size)
{
    for(int i=size;i>-1;i--)
    {
        c[i].degree = i;
        c[i].coeff = 0;
    }
    for(int j=m;j>-1;j--)
    {
        c[j].coeff = b[j].coeff;
    }
    for(int k=n;k>-1;k--)
    {
        c[k].coeff += a[k].coeff;
    }

    cout << "After adding polynomial 1 and polynomial 2 we get: "<<endl;
    for(int i=size;i>=0;i--)
    {
        cout << c[i].coeff << "x^" << c[i].degree << " ";
    }
    
}
int main()
{
    int n;
    cout << "What is the degree of the polynomial 1: ";
    cin >> n;

    int m;
    cout << "What is the degree of the polynomial 2: ";
    cin >> m;

    polynomials poly1[n+1];

    for(int i=n;i>=0;i--)
    {
        poly1[i].degree= i;
        float temp;
        cout << "Coeff for x^" << poly1[i].degree << ": ";
        cin >> temp;
        poly1[i].coeff = temp;
    }

    cout << "Polynomial 1 is: " << endl;
    for(int i=n;i>=0;i--)
    {
        cout << poly1[i].coeff << "x^" << poly1[i].degree << " ";
    }
    cout << endl;
    polynomials poly2[m+1];

    for(int i=m;i>=0;i--)
    {
        poly2[i].degree= i;
        float temp;
        cout << "Coeff for x^" << poly2[i].degree << ": ";
        cin >> temp;
        poly2[i].coeff = temp;
    }

    cout << "Polynomial 2 is: " << endl;
    for(int i=m;i>=0;i--)
    {
        cout << poly2[i].coeff << "x^" << poly2[i].degree << " ";
    }
    cout << endl;
    int size = max(n,m);
    polynomials c[size];
    polyAdd(poly1,n,poly2,m,c,size);
    return 0;
}