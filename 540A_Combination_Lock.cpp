#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,diff;
    cin>>n;
    string s, o;
    cin>>s;
    cin>>o;
    int mov=0;
    for(int i=0;i<n;i++)
    {
        diff=abs(s[i]-o[i]);
        if(diff>5)
            diff=10-diff;
        mov+=diff;
    }
    cout<<mov<<endl;
    return 0;
}
