#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1,d=0;
    string t1,t2,win;
    cin>>n;
    cin>>t1;
    for(int i=1;i<n;i++)
    {
        cin>>win;
        if(t1==win)
        {
            c++;
        }
        else
        {
            t2=win;
            d++;
        }
    }
    if(c>d)
        cout<<t1<<endl;
    else
        cout<<t2<<endl;
}
