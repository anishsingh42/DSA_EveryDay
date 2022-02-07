#include <bits/stdc++.h>
using namespace std;

void commonElements(int a[], int b[], int c[], int n1, int n2, int n3)
{
    vector<int> ans;
    /*
            int i=0, j=0;
            vector<int> temp;
            while(i<n1 && j<n2){
                if(a[i] == b[j]){
                    if(find(temp.begin(), temp.end(),a[i]) == temp.end()){
                        temp.push_back(a[i]);
                    }
                    i++;j++;
                }
                else if(a[i] < b[j])
                    i++;
                else
                    j++;
                
            }
            
            int k=0,l=0;
            while(k<n3 && l<temp.size()){
                if(c[k] == temp[l]){
                    if(find(ans.begin(), ans.end(),c[k]) == ans.end()){
                        ans.push_back(c[k]);
                    }
                    k++;l++;
                }
                else if(c[k] < temp[l])
                    k++;
                else
                    l++;
                
            }

            TLE will be caused
            */

    int i=0;int j=0; int k=0;
    while(i<n1 && j<n2 && k<n3){
        if(a[i] == b[j] && a[i] == c[k]){
            if(find(ans.begin(), ans.end(), a[i]) == ans.end()){
                ans.push_back(a[i]);
            }
            i++;j++;k++;
        }
        else if(a[i] < b[j])
            i++;
        else if(b[j] < c[k])    
            j++;
        else 
            k++;
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int *a = new int[n1];
    int *b = new int[n2];
    int *c = new int[n3];
    cout << "Enter elements for array A: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    cout << endl;

    cout << "Enter elements for array B: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    cout << endl;

    cout << "Enter elements for array C: ";
    for (int i = 0; i < n3; i++)
    {
        cin >> c[i];
    }
    cout << endl;

    commonElements(a, b, c, n1, n2, n3);
    return 0;
}