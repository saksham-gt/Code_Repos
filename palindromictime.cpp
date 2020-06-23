#include <bits/stdc++.h>
using namespace std;

int main()
{
    char t[5];

    for(int i=0;i<5;i++)
        cin>>t[i];
    
    char time[4];

    if(t[0]!='2' || t[1]!='3' || t[3]<='3' || t[4]<'2')
    {
        if(t[0] = t[4] && t[1]==t[3])
        {
            if(t[1]!=5)
            {
                t[1] = t[1]+1;
                t[3] = time[1];
            }
            else
            (
                t[1] = '0';
                t[3] = '0';
                t[0] += 1;
                t[4] = t[0];
            )  
        }
        else
        {
            if(t[4]<)
        }
    }
    cout<<t[1]<<"\n";
}