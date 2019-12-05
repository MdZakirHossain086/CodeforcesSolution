#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int a=2*t1+s*v1;
    int b=2*t2+s*v2;
    if(a<b)
        cout<<"First"<<endl;
    else if(a>b)
        cout<<"Second"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;


}
