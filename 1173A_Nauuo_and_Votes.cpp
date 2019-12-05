#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
       if (x>y)
        {
            if (x <= y+z)
               cout<<"?";
            else
                cout<<"+";
        }
        else if (x<y)
        {
            if (y<=x+z)
                cout<<"?";
            else
                cout<<"-";
        }
        else
        {
            if (z==0)
                cout<<"0";
            else
                cout<<"?";
        }
    return 0;
}
