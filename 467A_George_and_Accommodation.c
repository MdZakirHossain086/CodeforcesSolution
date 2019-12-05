#include<stdio.h>
int main()
{
    int n,p,q,i,r,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d%d",&p,&q);


                r=q-p;
                if(r>=2)
                    c++;

    }
    printf("%d\n",c);
    return 0;
}
