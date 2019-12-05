#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int i=1;i<=t;i++)
   {
   		long long int ans,a,b,k;
        cin>>a>>b>>k;
      	if(k%2==1)
      	{
      		ans=a+((a-b)*(k/2));
		}
		else
		{
			ans=(a-b)*(k/2);
		}
		cout<<ans<<endl;
   }
   return 0;
}
