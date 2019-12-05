#include<stdio.h>
int main()
{
    int n,h,i,r=0;
    scanf("%d%d",&n,&h);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>h)
            r=r+2;
        else
            r=r+1;
    }
    printf("%d\n",r);
    return 0;
}
