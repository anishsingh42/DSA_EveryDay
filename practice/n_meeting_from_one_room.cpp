//Date: 16 Sept 2021

#include<bits/stdc++.h>
using namespace std;


// Function to find the maximum number of meetings that can
// be performed in a meeting room.
    
struct meeting 
{
    int start;
    int end;
    int pos;
};
bool comparator(struct meeting a, meeting b)
{
        // if(a.end!=b.end)
        // {
        //     return a.end<b.end;
        // }
        // else
        //     return a.pos<b.pos;
        if(a.end<b.end) return true;
        else if(a.end>b.end) return false;
        else if(a.pos<b.pos) return true;
        return false;
        
}
int maxMeetings(int start[], int end[], int n)
{
       
    struct meeting meet[n];
    for(int i=0;i<n;i++)
    {
        meet[i].start=start[i];
        meet[i].end=end[i];
        meet[i].pos=i+1;
    }
    sort(meet , meet+n , comparator);
    int ans=0;
    int finish_time=meet[0].end;
        
    for(int i=0;i<n;i++)
    {
        if(meet[i].start>finish_time)
        {
            finish_time=meet[i].end;
            ans++;
        }
    }
        
    return ans;
        
}


int main()
{
    int n;
    cin >> n;

    int start[n];
    int end[n];


    for(int i=0;i<n;i++) cin >> start[i];
    
    for(int i=0;i<n;i++) cin >> end[i];

    cout<<"Ans: "<<maxMeetings(start,end,n);
}