#include<stdio.h>
int main()
{
    char ch[1000];
    int i;
    scanf("%s",ch);
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[0]>=97&&ch[0]<=122)
        {
            ch[0]=ch[0]-32;
        }
    }
    printf("%s\n",ch);
    return 0;
}
