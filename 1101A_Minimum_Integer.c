//not solved
#include<stdio.h>
int main()
{
    int q,l,r,i,j,k,d;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d%d%d",&l,&r,&d);
        if(d>=l)
        {
            for(i=r+1;i<=(r*2);i++)
        {
            if(i%d==0)
               {
                    printf("%d\n",i);
                break;
               }
        }
        }
        else if(d<l)
        {
            for(i=1;i<l;i++)
        {
            if(i%d==0)
            {
                 printf("%d\n",i);
                break;
            }
        }
        }

    }
    return 0;
}

