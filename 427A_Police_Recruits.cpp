#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0, crime=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            c=c+a[i];
        }
        else if(a[i]<0)
        {
            if(c>0)
            {
                c--;
            }
            else
            {
                crime++;
            }
        }
    }
    cout<<crime<<endl;
    return 0;
}
