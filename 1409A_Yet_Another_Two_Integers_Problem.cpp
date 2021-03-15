#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        long long int n=abs(a-b);
        long long int ans = ceil((double)n/10.0);
        printf("%lld\n",ans);

    }
    return 0;
}
