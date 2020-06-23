#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n, m;
    cin>>n>>m;
    long int m1 = 0, p1 = 0;
    int arr[n];
    int l[m], r[m], d[m];
    for(long int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==-1)
            m1++;
        else
            p1++;
    }

    for(long int i=0;i<m;i++)
    {
        cin>>l[i]>>r[i];
        d[i] = r[i] - l[i] + 1;
        if(d[i]%2==1)
            d[i] = 0;
        else
        {
            if(m1>=d[i]/2 && p1>=d[i]/2)
                d[i] = 1;
            else
                d[i] = 0;
        }
    }
    for(long int i=0;i<m;i++)
        cout<<d[i]<<"\n";
    
}