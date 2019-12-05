#include<stdio.h>
#include<math.h>
int main()
{
    int a[5][5],i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a);
            if(a!=0)
            {
                printf("%d\n",((abs(i-2)+abs(j-2))));
            }
        }
    }
    return 0;
}
