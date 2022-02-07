    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long int
     
    void solve(){
        ll n;
        // scanf ("%I64d", &n);
        cin >> n;
     
        ll cnt=0;
        ll b=0;
        if(n==4 || n==7)
            cout << "NO" << "\n";
        else{
            while(n>0){
                ll lastdigit = n%10;
                if(lastdigit == 4 || lastdigit == 7)
                {
                    n=n/10;
                    cnt++;
                }
                else{
                    b=1;
                    cout << "NO" << "\n";
                    break;
                }
            }
            if((n==0 || n>0 && n<1 || cnt==4 || cnt==7) && b!=1)
                cout << "YES" << "\n";
            // else 
            //     cout << "NO" << "\n";
        }
     
    }
    int main()
    {
        // int tt;
        // cin >> tt;
        // while(tt--){
            solve();
        // }
        return 0;
    }