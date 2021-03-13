#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c=0;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='C' || a[i][j]=='M' || a[i][j]=='Y')
                c++;
        }
    }
    if(c==0)
    {
        cout<<"#Black&White"<<endl;
    }
    else
    {
        cout<<"#Color"<<endl;
    }
    return 0;
}
