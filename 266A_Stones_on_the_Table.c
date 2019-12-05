#include<stdio.h>
int main()
{
    int n,i,c=0;
    char j[50];
    scanf("%d",&n);
    scanf("%s",j);
    for(i=0;i<n-1;i++)
    {
        if(j[i]==j[i+1])
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
