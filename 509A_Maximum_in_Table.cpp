#include<stdio.h>
#include<iostream>
using namespace std;
int n[11][11];
int main()
{
    int i,j,m;
    cin>>m;
    for(i=1;i<=m;i++)
        n[1][i]=1;
    for(i=2;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            n[i][j]=n[i-1][j]+n[i][j-1];
        }
    }
    cout<<n[m][m]<<endl;
    return 0;

}
