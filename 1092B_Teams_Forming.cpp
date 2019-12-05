#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,ans;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ans=0;
    for(i=0;i<n;i+=2)
    {
        ans+=abs(a[i]-a[i+1]);
    }
    cout<<ans<<endl;
    return 0;
}
