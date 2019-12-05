#include<stdio.h>
#include<string.h>
#define s1[]='hello'
int main()
{
    char s[100];
    int c=0,d=0,i,l;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<s;i++)
    {
      if(s[i]==s1[d])
      {
          a++;
          c++;
      }
    }
    if(c==5)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
