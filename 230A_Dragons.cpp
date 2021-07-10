#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,n;
    cin>>s>>n;
    pair<int,int>a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s>a[i].first)
        {
            s+=a[i].second;
            c++;
        }
        else
            break;
    }
    if(c==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
