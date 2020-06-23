#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    int d=1;
    cin>>s>>n;
    int x[n], y[n], cx[n], cy[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        cx[i] = x[i];
    }
    sort(cx, cx+n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(cx[i]==x[j] )
                cy[i] = y[j];
        }
    }
    /*
    for(int i=0;i<n;i++)
        cout<<cy[i]<<" ";
    cout<<"\n";
    */
    for(int i=0;i<n;i++)
    {
        if(cx[i]<=cy[i] && s>=0)
        {
            s-=cx[i];
            if(s<0)
            {
                cout<<"NO\n";
                exit(0);
            }
            s+=cy[i];
        }
        else
            continue;
    }
    for(int j=0;j<n;j++)
    {
        if(cx[j]>cy[j] && s>=0)
        {
            s-=cx[j];
            if(s<0)
            {
                cout<<"NO\n";
                exit(0);
            }
            else
                d=1;
            s+=cy[j];
            
        }
    }
    if(d=1)
        cout<<"YES\n";

    return 0;
}