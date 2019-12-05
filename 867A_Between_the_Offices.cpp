#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,f=0;
    cin>>n;
    string st;
    cin>>st;
    for(int i=0;i<n;i++)
    {
        if(st[i]=='S'&&st[i+1]=='F')
            s++;
            //break;
        else if(st[i]=='F'&&st[i+1]=='S')
            f++;
            //break;
    }
    if(s>f)
        cout<<"YES"<<endl;
    else if(f>=s)
        cout<<"NO"<<endl;
    return 0;
}
