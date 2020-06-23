#include<bits/stdc++.h>
using namespace std;

int max(int r[], int n)
{
    int m = r[0];
    for(int i=1;i<n;i++)
    {
        if(m<r[i])
            m = r[i];
    }
    return m;
}

int main()
{
    int n, x;
    cin>>n>>x;
    int l[n], r[n];
    for(int i=0;i<n;i++)
        cin>>l[i]>>r[i];
    
    int min=0;
    int t;
    for(int i=0;i<n;i++)
    {
        if(i==0)
            t = l[i]-1;
        else 
            t = l[i] - r[i-1] - 1;
        t = t%x;
        t += r[i] - l[i] + 1;
        min += t;
    }
    cout<<min<<"\n";
}