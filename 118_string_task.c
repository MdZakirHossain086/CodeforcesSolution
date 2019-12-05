#include<stdio.h>
int main()
{
    int i;
    char ch[100];
    scanf("%s",&ch);

    for(i=0;i<strlen(ch);i++){
        if(ch[i]>=65&&ch[i]<=90)
        {
            ch[i]=97+ch[i]-65;
        }
        if(ch[i]!='a'&&ch[i]!='e'&&ch[i]!='i'&&ch[i]!='o'&&ch[i]!='u'&&ch[i]!='y')
        {
            printf(".%c",ch[i]);
        }
    }
    return 0;
}
