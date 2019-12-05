#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    if(n==2)
        cout<<1<<endl;
    else if(n>2)
    {
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
                c++;
        }
        cout<<c<<endl;
    }
	return 0;
}
