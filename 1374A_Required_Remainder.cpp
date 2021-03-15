#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int x,y,n;
    while(t--)
    {
        scanf("%lld %lld %lld",&x,&y,&n);
        if(n-n%x+y<=n)
        {
            cout<<n-n%x+y<<endl;
        }
        else
        {
            cout<<n-n%x-(x-y)<<endl;
        }
    }
    return 0;
}
