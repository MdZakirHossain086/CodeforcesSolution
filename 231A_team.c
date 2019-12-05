#include<stdio.h>
int main()
{
    int i,n,p,v,t,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&p,&v,&t);
        if((p==1&&v==1&&t==1)||(p==1&v==1)||(p==1&&t==1)||(v==1&&t==1))
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
