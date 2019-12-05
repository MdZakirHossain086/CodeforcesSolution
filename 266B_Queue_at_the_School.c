#include<stdio.h>
int main()
{
    int n,t,temp,i,j;
    scanf("%d%d",&n,&t);
    char s[50];
    scanf("%s",s);
    for(i=0;i<t;i++){
    for(j=0;j<n;j++)
    {
        if(s[j]=='B'&&s[j+1]=='G')
        {
            temp=s[j];
            s[j]=s[j+1];
            s[j+1]=temp;
            j++;

        }


    }
    }
printf("%s",s);
    return 0;
}
