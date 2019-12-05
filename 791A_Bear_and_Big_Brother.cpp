#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,b,c,i;
    int m=0,n=0;
    cin>>l>>b;
    for(i=0; ;i++)
    {
        if(l<=b)
        {
            l = l*3;
            b = b*2;
        }
        else
            break;

    }
    cout<<i<<endl;
    return 0;
}
