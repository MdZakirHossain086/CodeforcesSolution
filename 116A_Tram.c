#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,a,b,tram=0, maxseat=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d%d",&a,&b);
        tram=tram-a;
        tram=tram+b;
        if(tram>maxseat)
        {
            maxseat=tram;
        }

    }

    printf("%d\n",maxseat);
return 0;
}
