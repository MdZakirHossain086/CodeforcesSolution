#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w,h,n,t;
    cin>>t;
    while(t--)
    {
        int ans=1;
        cin>>w>>h>>n;
        while(w%2==0)
        {
            w=w/2;
            ans=ans*2;
        }
        while(h%2==0)
        {
            h=h/2;
            ans=ans*2;
        }
        if(ans>=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
