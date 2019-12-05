#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int l[n];
    for(i=0;i<n;i++)
    {
        cin>>l[i];
    }
    sort(l,l+i);
    if(n & 1)
        cout<<l[n/2]<<endl;
    else
        cout<<l[(n-1)/2]<<endl;
    return 0;
}
