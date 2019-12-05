#include<stdio.h>
#include<string.h>
int main()
{
    char n[100],c=0,l,i;
    scanf("%s",n);
    l=strlen(n);
    for(i=0;i<l;i++)
    {
        if(n[i]=='4'||n[i]=='7')
        {
            c++;
        }
    }
    if(c==4||c==7)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}
