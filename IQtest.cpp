#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=0;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(a[0]%2==0 && a[1]%2==0)
    {
        for(int i=2;i<n;i++)
        {
            x=a[i]%2;
            if(x%2==1)
            {
                x=i+1;
                break;
            }
        }
    }
    else if(a[0]%2==1 && a[1]%2==1)
    {
        for(int i=2;i<n;i++)
        {
            x=a[i]%2;
            if(x%2==0)
            {
                x=i+1;
                break;
            }
        }
    }
    else
    {
        if(a[n-1]%2==a[0]%2)
            x=2;
        else if(a[n-1]%2==a[1]%2)
            x=1;   
    }

    cout<<x<<"\n";
    return 0;
}