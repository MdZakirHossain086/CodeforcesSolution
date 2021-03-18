#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=2&&n>=1)
        {
            cout<<1<<endl;
        }
        else
        {
            if(n%2==0)
            {
                cout<<n/2<<endl;
            }
            else
            {
                cout<<(n+1)/2<<endl;
            }
        }
    }
    return 0;
}
