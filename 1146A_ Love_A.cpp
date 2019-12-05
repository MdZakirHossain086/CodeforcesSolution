#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int a=0,l;
    string s;
    cin>>s;
    l=s.length();
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a')
            a++;
    }
    if(a>l/2)
        cout<<l<<endl;
    else
        cout<<(2*a-1)<<endl;
    return 0;
}
