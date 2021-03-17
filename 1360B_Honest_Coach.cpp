#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        int c=abs(a[0]-a[1]);
        for(int i=1;i<n;i++)
        {

            if(abs(a[i]-a[i+1])<c)
            {
                c=abs(a[i]-a[i+1]);
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
