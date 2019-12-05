#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,l,upper=0,lower=0;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(isupper(s[i]))
            upper++;
        else if(islower(s[i]))
            lower++;
    }
        if(upper>lower)
            for(i=0;i<l;i++)
            {
                s[i]=toupper(s[i]);
            }
        else if(lower>upper||lower==upper)
            for(i=0;i<l;i++)
        {
            s[i]=tolower(s[i]);
        }
        printf("%s\n",s);
    return 0;
}
