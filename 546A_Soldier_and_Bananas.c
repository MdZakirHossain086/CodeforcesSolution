#include<stdio.h>
int main()
{
    int k,n,w,s=0,i,ans;
    scanf("%d%d%d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        s=s+i*k;
    }
    ans=s-n;
        if(ans<=0)
            ans=0;
        printf("%d\n",ans);
    return 0;
}
