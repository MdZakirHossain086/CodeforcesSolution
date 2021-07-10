#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a;
    cin>>s;
    a=s;
    if(s[0]>='a'&&s[0]<='z')
    {
        s[0]-=32;
        int c=1;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]+=32;
                c++;
            }
        }
        if(c==s.length())
            cout<<s;
        else
            cout<<a;
    }
    else if(s[0]>='A'&&s[0]<='Z')
    {
        s[0]+=32;
        int c=1;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]+=32;
                c++;
            }
        }
        if(c==s.length())
            cout<<s;
        else
            cout<<a;
    }
    else
    cout<<a;
}
