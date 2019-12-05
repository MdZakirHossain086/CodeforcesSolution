#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q,m,c;
    cin>>q;
    while(q--)
    {
        cin>>m;
        if(m==2)
            c=2;
        else if(m>2)
        {
            if(m%2==0)
                c=0;
            else
                c=1;
        }
        cout<<c<<endl;
    }
    return 0;
}
