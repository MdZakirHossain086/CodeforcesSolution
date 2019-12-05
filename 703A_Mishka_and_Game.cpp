#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,n,m=0,c=0,a,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)
            m++;
        if(a<b)
            c++;
    }
    if(m>c)
        cout<<"Mishka"<<endl;
    else if(m<c)
        cout<<"Chris"<<endl;
    else if(m==c)
        cout<<"Friendship is magic!^^"<<endl;
    return 0;
}
