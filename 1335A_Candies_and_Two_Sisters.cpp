#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t,candy;
    cin>>t;
    while(t--)
    {
        cin>>candy;
        if(candy<=2)
        {
            cout<<"0"<<endl;
        }
        else
        {
            if(candy%2==0)
            {
                candy=floor(candy/2)-1;
                cout<<candy<<endl;
            }
            else
            {
                candy=floor(candy/2);
                cout<<candy<<endl;
            }
        }
    }
}
