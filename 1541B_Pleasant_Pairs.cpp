#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+2];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int c=0;
        for(int i=2;i<=n;i++)
        {
            int z=i+i-1;
            if(z<a[i])continue;
            int x=(z%a[i]+1);
            int y=i-x;
            while(y>=1)
            {
                if(y+i==a[i]*a[y])
                    c++;
                y-=a[i];
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
