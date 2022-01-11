#include<bits/stdc++.h>
using namespace std;
//testing
#define int long long
class Solution{
    public:
      void solve()
      {
        int r,b,d;
        cin>>r>>b>>d;
        int total=min(r,b);
        r-=total;
        b-=total;
        int find=max(r,b);
        if(d==0)
        {
            if(r==b)
            cout<<"YES";
            else
            cout<<"NO";
            return;
        }
        int fin=total*d;
        if(fin<find)
        cout<<"NO";
        else
        cout<<"YES";

        
        
 
      }
};

int32_t main(){
    int t;
    cin>>t;
    Solution obj;
    while(t--)
    {obj.solve();
     cout<<endl;
    }
}