#include<stdio.h>
int main()
{
    int n,k,a[50],i,j,c=0;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]>=a[k]&&a[i]>0)
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
