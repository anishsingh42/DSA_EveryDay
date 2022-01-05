//Date: 1st Jan 2022
// https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1#

#include <bits/stdc++.h>
using namespace std;

//isPossible()
bool isPossible(int A[], int N, int M, int mid)
{
    int pageSum = 0;
    int studentCount = 1;
    for (int i = 0; i < N; i++)
    {
        if (pageSum + A[i] <= mid)
        {
            pageSum += A[i];
        }
        else
        {
            studentCount++;
            if (studentCount > M || A[i] > mid)
            {
                return false;
            }
            //starting the newpartition
            pageSum = A[i];
        }
    }
    return true;
}
//Function to find minimum number of pages.
int findPages(int A[], int N, int M)
{
    //code here
    //in this example the books[i] is already sorted

    //let midpgs = start and maxpgs = end
    int start = 0;
    int end = 0;
    for (int i = 0; i < N; i++)
    {
        end += A[i];
    }

    int mid = 0;
    int ans = -1;
    while (start <= end)
    {
        //now we have our mid
        mid = start + ((end - start) / 2);

        //check whether the mid is a possible solution or not
        //if not a solution
        if (!isPossible(A, N, M, mid))
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    cout << "Enter the size of books: ";
    int n;
    cin >> n;
    int a[100];
    cout << endl << "Enter the pages available in the book: ";
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cout << endl << "Enter the number of the student: " ;
    int m;
    cin >> m;
    cout << findPages(a,n,m);
    return 0;
}