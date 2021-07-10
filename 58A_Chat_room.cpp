#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string k="hello";
    int j=0;
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==k[j])
        {
           c++;
            j++;
            if(c==5)
            {
                break;
            }
        }

    }
    if(c==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
