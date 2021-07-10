#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if(n==1||b==1|n%b==1)cout<<"Yes"<<endl;
        else if(a==1)
        {
            if(n%b==1)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else
        {
            int c=0;
            int i=0;
            while(pow(a,i)<=n)
            {
                int y=n-pow(a,i);
                if(y%b==0)
                {
                    c=1;
                    break;
                }
                i++;
            }
            if(c==1)cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
        }


    }
}
