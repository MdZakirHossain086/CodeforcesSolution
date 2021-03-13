#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    scanf("%d %d", &n ,&k);
    int code_time=240-k, counter=0,time=0;
    for(int i=1;i<=n;i++)
    {
        time=time+5*i;
        if(time<=code_time)
        {
            counter++;
        }
        else
        {
            break;
        }
    }
    printf("%d\n", counter);
}
