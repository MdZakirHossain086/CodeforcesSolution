#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,max;
	cin>>n;
	int a[n],sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
	}
        //max = a[n-1];
    sort(a,a+n);
    /*for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
	}*/
    if(n==1)
    {
        cout<<0<<endl;
	}
	else
	{
		for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
        cout<<(a[n-1]*n)-sum<<endl;
	}
        
    return 0;
}
