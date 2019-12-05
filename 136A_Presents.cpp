#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    int x[100];
    cin>>n;
    int a[n+10];
    for(i=1;i<=n;i++)
    {
    	cin>>a[i];
    	x[a[i]]=i;
	}
    for(i=1;i<=n;i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}
