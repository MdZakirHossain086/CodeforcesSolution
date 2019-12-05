#include<bits/stdc++.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
        {
            c=1;
            break;
        }
        else
            c=0;
    }
    if(c==0)
    {
        printf("easy\n");
    }
    else
        printf("hard\n");
    return 0;
}
