#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a,b,c,d,sum[n],rank=1;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d;
        sum[i]=a+b+c+d;
    }
    for(i=1;i<n;i++)
    {
        if(sum[0]<sum[i])
        {
            rank++;
        }
    }
    cout<<rank<<endl;
    return 0;
}
