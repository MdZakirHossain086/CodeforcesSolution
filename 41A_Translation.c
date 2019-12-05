#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,j,c=0;
    char s1[100],s2[100];
    scanf("%s%s",s1,s2);
    l=strlen(s1);
   for(int i=l-1, j=0; i>=0&&j<l; i--, j++) s2[j]=s1[i];
    for(int i=0; i<l; i++) if(s1[i]!=s2[i]) {
        c=1;
        break;
    }
    if(c==0)
        printf("YES\n");
    else
            printf("NO\n");
    return 0;
}
