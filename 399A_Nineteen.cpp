#include<bits/stdc++.h>
#include<math.h>
using namespace std;
/*int minimum(int n,int i, int e,int t)
{
    int a=n<i?n:i;
    int b=e<t?e:t;
    return ((a<b)?a:b);
}*/
int main()
{
    string s;
    const int divn=3, dive=3, divi=1, divt=1;
    int n=0,i=0,e=0,t=0;
    cin>>s;
    for(int j=0;j<s.size();j++)
    {
        if(s[j]=='n')
        {
            ++n;
            //break;
        }
        else if(s[j]=='i')
        {
            ++i;
            //break;
        }
        else if(s[j]=='e')
        {
            ++e;
            //break;
        }
        else if(s[j]=='t')
        {
            ++t;
            //break;
        }
    }
    int min = e/dive;
    if(i/divi < min){min = i/divi;}
    if(t/divt < min){min = t/divt;}
    if((n - 1)/(divn - 1) < min){min = (n - 1)/(divn - 1);}
    cout<<min<<endl;
    return 0;
}
