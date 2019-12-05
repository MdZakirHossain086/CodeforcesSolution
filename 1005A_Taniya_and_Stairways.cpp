#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1,i,j=0;
    cin>>n;
    int a[n+10],b[n+10];

    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(i!=0&&a[i]==1){
            c++;
        }
        if(a[i+1]==1){
            b[j]=a[i];
            j++;
        }
    }
    cout<<c<<endl;
    for(i=0;i<j;i++){
        cout<<b[i]<<" ";
    }
    cout<<a[n-1]<<endl;
    return 0;
}

