#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,y;
    scanf("%lld",&n);
    if(n%2==0)
    {
        x=n-8;
        y=8;
    }
    else
    {
        x = n-9;
        y = 9;
    }
    printf("%lld %lld\n",x,y);
    return 0;
}
