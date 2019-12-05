#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=0;
    string card_table,card_hand[5];
    cin>>card_table;
    for(i=0;i<5;i++)
    {
        cin>>card_hand[i];
        string hand=card_hand[i];
        if(hand[0]==card_table[0]||hand[1]==card_table[1])
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
