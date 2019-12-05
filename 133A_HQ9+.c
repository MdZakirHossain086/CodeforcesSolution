#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],i,l;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {

        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'||s[i]=='+')
        {

        printf("YES\n");
        return 0;
        }

    else

        printf("NO\n");
        return 0;

    }
    return 0;
}
