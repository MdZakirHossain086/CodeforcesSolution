#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b;
    scanf("%lld",&t);
    while(t--)
    {
        int ans;
        scanf("%lld %lld", &a, &b);
        if(a%b==0)
            ans=0;
        else
            ans=b-(a%b);
        printf("%d\n",ans);
    }
    return 0;
}
