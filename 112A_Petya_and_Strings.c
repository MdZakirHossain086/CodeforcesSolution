#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i,l;
    scanf("%s%s",s1,s2);
    l=strlen(s1);
    for(i=0;i<l;i++)
    {
        if(s1[i]<92)
        {
            s1[i]+=92;
        }
         if(s2[i]<92)
        {
            s2[i]+=92;
        }
    }
    if(s1==s2){
        printf("0\n");
    }
    else if(s1<s2){
        printf("-1\n");
    }
    else if(s1>s2){
        printf("1\n");
    }

    return 0;
}
