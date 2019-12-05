#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1001];
    gets(s);
    int c=0,i,length;
    length = strlen(s);
    sort(s,s+length);
    for(i=0;i<length-1;i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            c++;
            if(s[i]==s[i+1])
                c--;
        }

    }
    printf("%d\n",c);
    return 0;
}

