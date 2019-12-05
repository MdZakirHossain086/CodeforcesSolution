#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,c=0;
	cin>>n;
	string m[n];
	for(i=0;i<n;i++)
	{
		cin>>m[i];
	}
	for(i=0;i<n;i++)
	{
		if(m[i]!=m[i+1])
		{
			c++;
		}
	}
	cout<<c<<endl;
	return 0;
}
