#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
        int num;
        cin>>num;
        int arr[num];
        int zero=0,one=0;
     for(int i = 1; i <= num; i++){
        cin>>arr[i];
        if(arr[i] == 0) zero++;
        else one++;
    }

    int c1 = 0, c2 = 0;
    for(int i = 1; i <= num; i++){
        if(arr[i] == 0)
            c1++;
        else
            c2++;
        if(zero == c1 || one == c2){
            cout << i << endl;
        break;
        }
    }
}
