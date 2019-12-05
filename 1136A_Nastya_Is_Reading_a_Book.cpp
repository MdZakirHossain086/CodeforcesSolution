#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l[n],r[n],current_chapter=0,current_page,i;
    for(i=0;i<n;i++)
    {
        cin>>l[i]>>r[i];
    }
    cin>>current_page;
    for(i=0;i<n;i++)
    {
        if(current_page<=r[i])
        {
            current_chapter++;
        }
    }
    cout<<n-current_chapter<<endl;
    return 0;
}
