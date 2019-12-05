#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,k,i;
    cin>>n>>p>>k;
    if(p-k>1)
        cout<<"<<";
    for(i=p-k;i<=p+k;i++)
        if((i>=1)&&(i<=n))
            {
                printf((i==p)?" (%d) ":" %d ",i);
            }
    if(p+k<n)
        cout<<">>";
    return 0;
}

