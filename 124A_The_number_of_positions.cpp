#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c=0;
    cin>>n>>a>>b;
    for(int i=n-b;i<=n;i++)
    {
        if(i>a)
            c++;
    }
    cout<<c<<endl;
}
