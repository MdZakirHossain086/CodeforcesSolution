#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int middle(int x, int y, int z)
{
    if(x<y&&y<z || z<y&&y<x)
        return y;
    if(y<x&&x<z || z<x&&x<y)
        return x;
    if(x<z&&z<y || y<z&&z<x)
        return z;
}
int maximum(int x, int y,int z)
{
    if(x>y&&x>z)
        return x;
    if(y>x&&y>z)
        return y;
    if(z>y&&z>x)
        return z;
}
int minimum(int x, int y, int z)
{
    if(x<y&&x<z)
        return x;
    if(y<x&&y<z)
        return y;
    if(z<y&&z<x)
        return z;
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int max_d,min_d,mid_d;
    max_d = maximum(x,y,z);
    min_d = minimum(x,y,z);
    mid_d = middle(x,y,z);

    cout<<(max_d-mid_d)+(mid_d-min_d)<<endl;
    return 0;
}
