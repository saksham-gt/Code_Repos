#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int m = arr[0];
    for(int i=1;i<n;i++)
    {
        if(m<arr[i])
            m = arr[i];
    }

    int cnt[m];
    for(int i=0;i<m;i++)
        cnt[i] = 0;

    for(int i=0;i<n;i++)
        cnt[arr[i]-1]++;

    int max = cnt[0];
    for(int i=1;i<m;i++)
    {
        if(cnt[i]>max)
            max = cnt[i];
    }
    //cout<<max<<"\n";
    if(n%2==1)
    {
        if(max>n/2+1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    else
    {
       if(max>n/2)
            cout<<"NO\n";
        else
            cout<<"YES\n"; 
    }
}