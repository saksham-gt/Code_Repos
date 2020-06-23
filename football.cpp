#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string arr[n], teams[2];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    teams[0] = arr[0];
    int cnt0 = 0, cnt1 = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==teams[0])
            cnt0++;
        else
        {
            teams[1] = arr[i];
            cnt1++; }
    }
    //cout<<cnt0<<" "<<cnt1<<"\n";
    if(cnt1>cnt0)
        cout<<teams[1]<<"\n";
    else    
        cout<<teams[0]<<"\n";
}