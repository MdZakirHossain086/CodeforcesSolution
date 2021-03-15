#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b;
    while(t--)
    {
        int ans;
        cin>>a>>b;
        if(a<=b)
        {
            ans=max(2*a,b)*max(2*a,b);
        }
        else
        {
            ans=max(a,2*b)*max(a,2*b);
        }
        cout<<ans<<endl;
    }
    return 0;
}
