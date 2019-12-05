#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a=0,d=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
            a++;
        else if(s[i]=='D')
            d++;
    }
    if(a>d)
        cout<<"Anton"<<endl;
    else if(a<d)
        cout<<"Danik"<<endl;
    else if(a==d)
        cout<<"Friendship"<<endl;
    return 0;
}
