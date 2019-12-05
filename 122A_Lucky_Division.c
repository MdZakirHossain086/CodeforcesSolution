#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,l,s1,c=0;
    scanf("%s",s);
    l=strlen(s);
    s1= atoi(s);
    for(i=0;i<l;i++)
    {
        if(s[i]==4||s[i]==7)
        {
            c++;
            break;
        }
    }
    if(c==1||s1%4==0||s1%7==0||s1%47==0||s1%74==0||s1%444==0||s1%447==0||s1%474==0||s1%477==0)
    {
        printf("YES\n");
    }
     else
            printf("NO\n");

    return 0;
}
