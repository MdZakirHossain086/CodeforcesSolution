#include<stdio.h>
#include<iostream>
using namespace std;
int n,i,c=0;
string s,ch[1001];
int main()
{

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s[0]=='O'&&s[1]=='O'&&c==0)
        {
            s[0]='+';
            s[1]='+';
            c=1;
        }
        else if(s[3]=='O'&&s[4]=='O'&&c==0)
        {
            s[3]='+';
            s[4]='+';
            c=1;
        }
        ch[i]=s;
    }
    if(c==1)
    {
        cout<<"YES"<<endl;
        for(i=0;i<n;i++)
        {
            cout<<ch[i]<<endl;
        }
    }
    else
        cout<<"NO"<<endl;
    return 0;


}
