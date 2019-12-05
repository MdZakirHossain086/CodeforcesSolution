#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,result=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if((s[i]-'0')%2==0)
            result+=(i+1);
    }
    cout<<result<<endl;
    return 0;

}
