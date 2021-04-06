#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int c=97, diff;
    int rot = 0;
    for(int i=0;i<s.size();i++)
    {
        diff=abs(c-s[i]);
        if(diff>13)
            diff=26-diff;
        rot+=diff;
        c=s[i];
    }
    cout<<rot<<endl;
    return 0;
}
