#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int c=0,d=0,i,l,flag=0;
    scanf("%s",&s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='0')
        {
            c++;
            d=0;
        }
        else if(s[i]=='1')
        {
            d++;
            c=0;
        }
        if(c>6||d>6){
        flag=1;
            break;
        }
    }
  if(flag==1){
    printf("YES\n");
  }
  else
    printf("NO\n");

    return 0;
}
