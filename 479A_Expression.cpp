#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ar[8];
    ar[0]=a+b+c;
    ar[1]=a*b*c;
    ar[2]=a+b*c;
    ar[3]=a*b+c;
    ar[4]=a*(b+c);
    ar[5]=(a*b)+c;
    ar[6]=a+(b*c);
    ar[7]=(a+b)*c;
    sort(ar,ar+8);
    cout<<ar[7]<<endl;
}
