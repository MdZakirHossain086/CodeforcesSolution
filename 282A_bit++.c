#include<stdio.h>
#include<string.h>
int main()
{
    int n,c=0,i;
    char s[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        if(s[0]=='+'||s[1]=='+')
        {
            c++;
        }
        else if(s[0]=='-'||s[1]=='-')
        {
            c--;
        }
    }
    printf("%d\n",c);
    return 0;
}
