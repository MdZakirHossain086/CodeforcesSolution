#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    double p,per=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p;
        per=per+p;
    }
    printf("%.12lf\n",(per/n));
    return 0;
}
