#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0,sum=0;
    int x=1;
   while(1)
    {
        for(int i=1;i<=x;i++)
        {
            sum+=i;
        }
        x++;
        if(sum>n)
            break;
        c++;
    }
    cout<<c<<endl;
}
