#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,j,c=0;
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        if(x%i==0&&x/i<=n)
            c++;
    }
    printf("%d\n",c);
}
