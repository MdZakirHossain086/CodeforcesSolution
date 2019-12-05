#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,z=0,o=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='z')
            z++;
            //break;
        else if(s[i]=='n')
            o++;
            //break;
    }
    while(o--)
        cout<<1<<" ";
    while(z--)
        cout<<0<<" ";
    return 0;
}
