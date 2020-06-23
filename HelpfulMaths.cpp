#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int h=str.size();
    //cout<<h<<"\n";
    int cnt1 = 0, cnt2 = 0, cnt3 = 0; 
    for(int i=0;i<h;i++)
    {
        if(str[i]=='1')
            cnt1++;
        else if(str[i]=='2')
            cnt2++;
        else if(str[i]=='3')
            cnt3++;
        else 
            continue;
    }
    //cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<"\n";
    for(int i=0;i<h;i++)
    {
        while(cnt1!=0)
        {
            str[2*i]='1';
            cnt1--;
            i++;
            continue;
        }
        while(cnt2!=0)
        {
            str[2*i]='2';
            cnt2--;
            i++;
            continue;
        }
        while(cnt3!=0)
        {
            str[2*i]='3';
            cnt3--;
            i++;
            continue;
        }
    }
    for(int i=0;i<h;i++)
        cout<<str[i];
    cout<<"\n";

    return 0;
}