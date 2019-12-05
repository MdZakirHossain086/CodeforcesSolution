#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,i;
        string s;
        int k = 0;
        cin>>n;
        cin>>s;
        for (i=0; i<n; i++){
            if (s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x'){
                k++;
            }
        }
        printf("%d\n",k);

    return 0;
}
